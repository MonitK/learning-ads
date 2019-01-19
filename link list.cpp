#include <iostream>
#include <stdlib.h>

using namespace std;

class Student
{
private:
	int rollno;
	char stname[10];
public:
	class Student *next;
	void addStudent()
	{
		cout<<"\nEnter Rollno : "; cin>>rollno;
		cout<<"Enter Student name : "; cin>>stname;
		this->next=NULL;
	}
	void showStudent()
	{
		cout<<"\nRollno is : "<<rollno<<" and name : "<<stname;
	}
	int getRollno()
	{
		return rollno;
	}
}*start;

/*............Add new node.............*/
void addNewNode()
{
	//Allocate memory to the node
	Student *newNode = new Student();
	newNode->addStudent();

	if(start==NULL)
	{
	 start = newNode;
	}
	else
	{
		Student *temp,*prev;
		temp = start;
		while(temp!=NULL && temp->getRollno()<newNode->getRollno())
		{
			prev = temp;
			temp=temp->next;
		}

		if(temp==start)
		{
			newNode->next=start;
			start = newNode;
		}
		else if(temp==NULL)
		{
			prev->next= newNode;
//			last=newNode;
		}
		else
		{
			 newNode->next = temp;
			 prev->next = newNode;
		}
	}
}
/*............delete node ...............*/
void deleteNode()
{
	if(start==NULL)
	{
		cout<<endl<<"List is empty"<<endl;
		return;
	}
int rollno;
cout<<"\nEnter rollno to be deleted : "; cin>>rollno;
Student *temp,*prev;
temp = start;
	while(temp!=NULL && temp->getRollno()!=rollno)
	{
	prev = temp;
	temp=temp->next;
	}

	if(temp==NULL)
	{
		cout<<endl<<"Rollno not found"<<endl;
	}
	else if(temp==start)	//for first
	{
		start = temp->next;
		delete temp;
	}
	else if(temp->next==NULL)	//for last
	{
		prev->next=NULL;
  //		last =prev;
		delete temp;
	}
	else	//in between
	{
	 prev->next = temp->next;
	 delete temp;
	}
}
/*............Traverse List..............*/
void showList()
{
	if(start==NULL)
	{
		cout<<endl<<"List is empty"<<endl;
		return;
	}
	Student *temp = start;
	while(temp!=NULL)
	{
		temp->showStudent();
		temp = temp->next;
	}
}
int menu()
{
int choice;
	cout<<"\n0.\tExit"<<endl;
	cout<<"1.\tAdd New Node"<<endl;
	cout<<"2.\tDelete Node"<<endl;
	cout<<"3.\tTraverse Node"<<endl;
	cout<<"\n\tEnter Your choice : ";
	cin>>choice;
return choice;
}

int main()
{
start = NULL;
	while(1)
	{
		switch(menu())
		{
		case 0:
			exit(0);
		case 1:
			cout<<endl<<"\nAdd New node"<<endl;
			addNewNode();
			break;
		case 2:
			cout<<endl<<"Delete new node"<<endl;
			deleteNode();
			break;
		case 3:
			cout<<endl<<"Show nodes"<<endl;
			showList();
			break;
		default:
			cout<<"Case not defined"<<endl;
		}//end of switch
	}//end of while
	return 0;
}

#include <iostream>

using namespace std;

class student
{
	int roll;
	string name;
	char gender;
public:
	void student_Details()
	{
		cout<<"\nEnter Name - ";
		cin>>name;
		cout<<"\nEnter Roll - ";
		cin>>roll;
		cout<<"\nEnter Gender - ";
		cin>>gender;
	}
	void show_student_Details()
	{
		cout<<"\nName - "<<name;
		cout<<"\nRoll - "<<roll;
		cout<<"\nGender - "<<gender;
	}
};

class Internal_Exam:public student
{
protected:
	float imarks[6];
public:
	void get_imarks()
	{
		for(int i=0;i<6;i++)
		{
			cout<<"\nEnter Marks of subject "<<i+1<<" - ";
			cin>>imarks[i];
		}
	}
	void display_imarks()
	{
		for(int i=0;i<6;i++)
		{
			cout<<"\nMarks of subject "<<i+1<<" - "<<imarks[i];
		}
	}
};

int main()
{
  return 0;
}

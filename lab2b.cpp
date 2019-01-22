#include <iostream>

#define SIZE 3

using namespace std;

int array[SIZE];
int front=0;
int rear=0;

class Queue
{
  private:
    int pushing_element;
    int i;
  public:
    void push()
    {
      cout<<"Enter element to be pushed : ";
      cin>>pushing_element;
      if (rear==SIZE)
      {
        cout<<"Queue overflow"<<endl<<endl;
      }
      else
      {
        array[rear]=pushing_element;
        rear++;
      }
    }
    void pop()
    {
      if(front==rear)
      {
        cout<<"Queue Underflow";
      }
      else
      {
        front++;
      }
    }
    void display()
    {
      if (front == rear)
      {
        cout<<"Queue is empty";
      }
      else
      {
        cout<<"Queue is : ";
        for(i=front;i<rear;i++)
        {
          cout<<array[i]<<" ";
        }
      }
    }
};

int main()
{
  int choice;
  Queue q;
  while(1)
  {
    cout<<"--------------------------------QUEUE USING ARRAY-------------------------------";

    cout<<endl<<endl<<endl<<endl;
    cout<<endl<<"1.\tPush elemnt in Stack";
    cout<<endl<<"2.\tPop elemnt from Stack";
    cout<<endl<<"3.\tDisplay elemnts in Stack";
    cout<<endl<<endl<<"0.\tExit";

    cout<<endl<<endl<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    cout<<endl<<endl;
    switch(choice)
    {
      case 1:
        q.push();
        cout<<endl<<endl<<endl;
        break;
      case 2:
        cout<<"Pop";
        cout<<endl<<endl<<endl;
        break;
      case 3:
        cout<<"Display";
        cout<<endl<<endl<<endl;
        break;
      case 0:
        exit(0);
        cout<<endl<<endl<<endl;
        break;
      default:
        cout<<"Wrong Choice";
        cout<<endl<<endl<<endl;
        break;
    }
  }
  return 0;
}

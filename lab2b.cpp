#include <iostream>

using namespace std;

class Queue
{};

int main()
{
  int choice;

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
      cout<<"Push";
      break;
    case 2:
      cout<<"Pop";
      break;
    case 3:
      cout<<"Display";
      break;
    case 0:
      cout<<"Exit";
      break;
    default:
      cout<<"Wrong Choice";
      break;
  }

  return 0;
}

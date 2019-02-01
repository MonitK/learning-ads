#include <iostream>

using namespace std;

int main()
{
  int choice;
  int num1,num2;
  cout<<endl<<endl<<"1.Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<endl<<"0.Exit"<<endl;
	cout<<endl<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	cout<<endl<<endl;
  switch(choice)
	{
		case 1:
			cout<<"Enter first number : ";
      cin>>num1;
      cout<<"Enter second number : ";
      cin>>num2;
			//c.add(num1,num2);
			break;
		case 2:
			cout<<"Enter first number : ";
      cin>>num1;
      cout<<"Enter second number : ";
      cin>>num2;
      //c.sub(num1,num2);
			break;
		case 3:
			cout<<"Enter first number : ";
      cin>>num1;
      cout<<"Enter second number : ";
      cin>>num2;
      //c.mul(num1,num2);
			break;
		case 4:
			cout<<"Enter first number : ";
      cin>>num1;
      cout<<"Enter second number : ";
      cin>>num2;
			//c.div(num1,num2);
			break;
		case 5:
			cout<<"Enter base : ";
			cin>>num1;
			cout<<"Enter exponent : ";
			cin>>num2;
			//c.pwr(num1,num2);
			break;
		case 0:
			return 0;
			break;
		default:
			cout<<"Wrong input";
			break;
	}
  return 0;
}

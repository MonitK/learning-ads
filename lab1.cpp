#include <iostream>

using namespace std;

class Binary
{
  private:
		int num;
		int arr[50];
		int i;

  public:
		void input()
		{
			cout<<"Enter number to convert to binary (Must be greater than 0) : ";
			cin>>num;
			if(num<0)
			{
				input();
			}
		}
		void convert()
		{
			i=0;
			while(num>0)
			{
				arr[i]=num%2;
				num=num/2;
				i++;
			}
		}
		void display()
		{
			cout<<"Binary No : ";
			i--;
			while(i>=0)
			{
				cout<<arr[i];
				i--;
			}
		}
};

int main()
{
	Binary bin;
	bin.input();
	bin.convert();
	bin.display();
	return 0;
}

#include <iostream>

using namespace std;

int Add(int a=10, int b=20)
{
  return (a+b);
}

int main()
{
  int x=5,y=6,z;
  z=Add(x,y);
    //No default parameter
  cout<<"Sum : "<<z<<endl<<endl;
  z=Add(x);
    //One default parameter
  cout<<"Sum : "<<z<<endl<<endl;
  z=Add();
    //Both default parameter
  cout<<"Sum : "<<z<<endl<<endl;
  return 0;
}

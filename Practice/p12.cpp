#include <iostream>

using namespace std;

int Identify(int a = 5)//Default value
{
  return (a);
}

int main()
{
  int a = 10,b;
  b=Identify(a);
    //Normal function call
  cout<<"b : "<<b<<endl<<endl;

  b=Identify();
    //Default parameters used
  cout<<"b : "<<b<<endl<<endl;
  return 0;
}

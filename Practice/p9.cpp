#include <iostream>

using namespace std;

void Fun(int &b, int c);
//Declaring Function

int main()
{
  int a=20;
  cout<<"a : "<<a<<", &a : "<<&a<<endl<<endl;
  return 0;
}

void Fun(int &b, int c)
{
  cout<<"b : "<<b<<", &b : "<<&b<<endl<<endl;
  cout<<"c : "<<c<<", &c : "<<&c<<endl<<endl;
}
//Defining Function

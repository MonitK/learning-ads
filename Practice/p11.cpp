#include <iostream>

using namespace std;

//Refrence parameter as a constant

int Ref (const int &x)
{
  //++x;
    //Not Allowed
    //Value of x cant be changed
  //return (x);
  return (x+1);
    //No violation
}

int main()
{
  int a = 10;
  int b;
  b = Ref(a);
  cout<<"a : "<<a<<", b: "<<b<<endl;
  return 0;
}

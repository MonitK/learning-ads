#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int &b = a;
    //b is the refrence of a
  cout<<"a : "<<a<<"  , b :"<<b<<endl;
  cout<<"&a : "<<&a<<"  , &b :"<<&b<<endl;
    //a and b have same memory
  ++a;
  cout<<"a : "<<a<<"  , b :"<<b<<endl;
  return 0;
}

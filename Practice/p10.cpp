#include <iostream>

using namespace std;

void swap(int *, int *);
//Function Declared

int main()
{
  int a=10,b=15;
  cout<<"a : "<<a<<", b : "<<b<<endl<<endl;
  swap(&a, &b);
  cout<<"a : "<<a<<", b : "<<b<<endl<<endl;
  return  0;
}

void swap(int *x, int *y)
{
  int t;
  t = *x;
  *x = *y;
  *y = t;
}
//Function Defined

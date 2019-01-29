#include <iostream>

using namespace std;

//  Program to swap two numbers using pointers


int main()
{
  int a=3;
  int b=5;
  int *ptr1=&a;
  int *ptr2=&b;
  cout<<"Before swapping"<<endl<<"*ptr1 : "<<*ptr1<<endl<<"*ptr2 : "<<*ptr2<<endl;
  cout<<endl;
  *ptr1=(*ptr1)^(*ptr2);
  *ptr2=(*ptr2)^(*ptr1);
  *ptr1=(*ptr1)^(*ptr2);
  cout<<"After swapping"<<endl<<"*ptr1 : "<<*ptr1<<endl<<"*ptr2 : "<<*ptr2<<endl;
  cout<<endl;
  return 0;
}

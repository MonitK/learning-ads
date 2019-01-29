#include <iostream>

using namespace std;

const int SIZE=10;

/*
*(ptr++)
*(++ptr)
++(*ptr)
(*ptr)++
*/

int main()
{
  int a[SIZE];
  int *ptr=a;
  for (int i=0;i<SIZE;i++)
  {
    a[i]=i;
  }
  cout<<*(ptr++);
  cout<<endl;
  cout<<*ptr;
  cout<<endl;
  cout<<*(++ptr);
  cout<<endl;
  cout<<*ptr;
  cout<<endl;
  cout<<++(*ptr);
  cout<<endl;
  cout<<*ptr;
  cout<<endl;
  cout<<(*ptr)++;
  cout<<endl;
  cout<<*ptr;
  cout<<endl;
  return 0;
}

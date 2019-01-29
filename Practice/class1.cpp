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
  for (int i=0;i<SIZE;i++)
  {
    a[i]=i;
    cout<<a[i]<<endl;
  }
  return 0;
}

#include <iostream>

using namespace std;

int main()
{
  //discussing const
  int m=4;
  const int n=5;
  const int *p=&n;
  //n=6;
    // n is a constant so cant be changed
  //*p=7;
    // p points to constant data that cant be changed.
  p=&m;
    // because p is not a constant so can be changed.
  return 0;
}

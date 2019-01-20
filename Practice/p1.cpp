#include <iostream>
#include <cmath>

using namespace std;

const int TWO = 2;
const double PI = 3.14;

int main()
{
  int r=10;
  double peri = TWO * PI *r;

  cout<<"Perimeter : "<<peri<<endl;

  return 0;
}

/*
Advantages of const over #define
  1.#define doesnt checks the datatype rather replaces directly
  2.the declarations in const are variables while in #define is a manifest constant
*/

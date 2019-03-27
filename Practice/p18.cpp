#include <iostream>

using namespace std;

namespace myNamesp
{
  int x;
}

int main()
{

  int x=3;
  myNamesp::x=5;
  cout<<x<<endl;
  cout<<myNamesp::x;
}

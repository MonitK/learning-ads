#include <iostream>

using namespace std;

int main()
{
  bool a = true;
  bool b = false;
  bool c = false;

  if(a || b && c)
  {
    cout<<"True Block";
  }
  else
  {
    cout<<"False Block";
  }
  
  return 0;
}

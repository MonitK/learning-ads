#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  String stringone = new String("nextGenCoder");
  String stringtwo = new String("nextGenCoder");

  if (stringone == stringtwo)
  {
    cout<<"Equal";
  }
  else
  {
    cout<<"Not Equal";
  }

  return 0;
}

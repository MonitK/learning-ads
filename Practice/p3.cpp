#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char * str = strdup("IIT,Kharagpur");
  str[0]='N';       //Edit the name
  cout<<str<<endl;
  str = strdup("JIT,Kharagpur");    //Change the name
  cout<<str<<endl;

  /*
    p4.cpp and p5.cpp are an expention to the same
    program refer p4 and p5 to see the difference
    in the const used.
  */

  return 0;
}

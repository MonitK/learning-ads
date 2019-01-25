#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  const char * str = strdup("IIT,Kharagpur");
  cout<<str<<endl;
    //str[0]='N';
    //Error : Cannot edit the name
  str = strdup("JIT,Kharagpur");
    //Change the name
  cout<<str<<endl;
  return 0;
}

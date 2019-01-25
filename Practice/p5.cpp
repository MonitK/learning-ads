#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char * const str = strdup("IIT,Kharagpur");
  cout<<str<<endl;
  str[0]='N';
  cout<<str<<endl;
    //Edit the name
  str = strdup("JIT,Kharagpur");
  return 0;

}

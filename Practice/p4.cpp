#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  const char * str = strdup("IIT,Kharagpur");
  cout<<str<<endl;
  str[0]='N';
  return 0;
}

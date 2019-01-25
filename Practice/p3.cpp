#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char * str = strdup("IIT,Kharagpur");
  str[0]='N';       //Edit the name
  cout<<str<<endl;
  return 0;
}

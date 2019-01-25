#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char * const str = strdup("IIT,Kharagpur");
  cout<<str<<endl;
  return 0;
}

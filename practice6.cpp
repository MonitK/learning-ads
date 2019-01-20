#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char str1[]="HELLO ";
  char str2[]="WORLD";
  char str[20];

  strcpy(str,str1);
  //Copying first string to str
  strcat(str,str2);
  //Copying second string to str

  cout<<str<<endl;
  return 0;
}

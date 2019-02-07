#include <iostream>

using namespace std;

//void f (int, double=0.0, char *);
  //Missing default parameter for all values.

void g (int, double=0, char * =NULL);
  //OK
//void g (int, double=1, char * =NULL);
  //Cant initialise again

int main()
{
  cout<<"Default values";
  return 0;
}

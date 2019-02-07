#include <iostream>

using namespace std;

//void f (int, double=0.0, char *);
  //Missing default parameter for all values.

void g (int, double=0, char * =NULL);
  //OK
    //All parameters to the right of default parameter must be initialised.
//void g (int, double=1, char * =NULL);
  //Cant initialise again

int main()
{
  int i=5;
  double d=2.3;
  char c = 'b';

  //g();
    //Error as function required at least one argument.
  g(i);
  g(i, d);
  g(i, d, &c);

  cout<<"Default values";
  return 0;
}

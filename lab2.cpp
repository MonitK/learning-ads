#include <iostream>

using namespace std;

class Factorial
{
  public:
    Factorial(int i)
    {
      cout<<"Parametrised Constructor calling"<<endl;
    }
};

int main()
{
  Factorial fact(1);
  return 0;
}

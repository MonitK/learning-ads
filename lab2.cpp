#include <iostream>

using namespace std;

class Factorial
{
  public:
    Factorial(int i)
    {
      cout<<"Parametrised Constructor calling"<<endl;
    }
  private:
    int fact(int n)
    {
      if (n>1)
      {
        return n * fact(n-1);
      }
      else
      {
        return 1;
      }
    }
};

int main()
{
  Factorial num(1);
  return 0;
}

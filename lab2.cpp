#include <iostream>

using namespace std;

class Factorial
{
  private:
    int result;
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
  public:
    Factorial(int i)
    {
      result = fact(i);
      cout<<endl<<"Factorial of "<<i<<" is : "<<result;
    }
};

int main()
{
  Factorial num(5);
  return 0;
}

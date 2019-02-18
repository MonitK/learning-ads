#include <iostream>

using namespace std;

class Student
{
private:
  int n;
public:
  void fun()
  {
    cout<<"Enter a value1 : ";
    cin>>n;
  }
};

int main()
{
  Student obj1;
  obj1.fun();
  return 0;
}

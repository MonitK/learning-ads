#include <iostream>

using namespace std;

class himani
{
private:
  int n;
public:
  himani ()
  {
    n=0;
    cout<<"hello "<<n<<endl;
  }
  himani(int a)
  {
    n=a;
    cout<<"hello "<<n<<endl;
  }
};

int main()
{
  cout<<"hi    "<<endl;
  himani bansal1;
  himani bansal2;
  himani bansal3;
  himani b(2);
  return 0;
}

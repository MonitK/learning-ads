#include<iostream.h>

using namespace std;

class student
{
  private:
    int number, marks[6], total;
    char name[20];
    float avg;
  public:
    void initialize();
    friend class fstudent;
};

int main()
{
  return 0;
}

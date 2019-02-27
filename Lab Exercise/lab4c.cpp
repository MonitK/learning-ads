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

class fstudent       // friend class
{
  public:
    void totavg(student &);
    void display(student);
};

int main()
{
  return 0;
}

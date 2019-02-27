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

void student::initialize()
{
  int i;
  cout<<"Number: ";    cin>>number;
  cout<<"Name: ";        cin>>name;
  cout<<"Marks in 6 Subjects: ";
  for(i=0; i<6; i++)
  {
    cin>>marks[i];
  }
}

void fstudent::totavg(student & st1)
{
  int i,sum=0;
  for(i=0; i<6; i++)
  {
    sum=sum+st1.marks[i];
  }
  st1.total=sum;
  st1.avg=st1.total/6.0;
}

int main()
{
  return 0;
}

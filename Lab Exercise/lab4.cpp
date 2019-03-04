#include <iostream>

using namespace std;

class student
{
	int roll;
	string name;
	char gender;
public:
	void student_Details()
	{
		cout<<"\nEnter Name - ";
		cin>>name;
		cout<<"\nEnter Roll - ";
		cin>>roll;
		cout<<"\nEnter Gender - ";
		cin>>gender;
	}
	void show_student_Details()
	{
		cout<<"\nName - "<<name;
		cout<<"\nRoll - "<<roll;
		cout<<"\nGender - "<<gender;
	}
};

int main()
{
  return 0;
}

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

class Internal_Exam:public student
{
protected:
	float imarks[6];
public:
	void get_imarks()
	{
		for(int i=0;i<6;i++)
		{
			cout<<"\nEnter Marks of subject "<<i+1<<" - ";
			cin>>imarks[i];
		}
	}
	void display_imarks()
	{
		for(int i=0;i<6;i++)
		{
			cout<<"\nMarks of subject "<<i+1<<" - "<<imarks[i];
		}
	}
};

class External_Exam:public student
{
protected:
	float emarks[6];
public:
	void get_emarks()
	{
		for(int i=0;i<6;i++)
		{
			cout<<"\nEnter Marks of subject "<<i+1<<" - ";
			cin>>emarks[i];
		}
	}
	void display_emarks()
	{
		for(int i=0;i<6;i++)
		{
			cout<<"\nMarks of subject "<<i+1<<" - "<<emarks[i];
		}
	}
};

class Result:public External_Exam,public Internal_Exam
{
	float result[6];
public:
	void display_result()
	{
		for(int i=0;i<6;i++)
		{
			result[i]=(0.4*imarks[i])+(0.6*emarks[i]);
			cout<<"\nResult subject "<<i+1<<" - "<<result[i];
		}
	}

};

int main()
{
  return 0;
}

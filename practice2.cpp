#include <iostream>

using namespace std;

class Student
{
	public:
		char stname[20];
		int rollno;
		double sapid;

	public:
		void input()
		{

		}
		void display()
		{
			std::cout<<"\nName    :"<<stname;
			std::cout<<"\nRoll No :"<<rollno;
			std::cout<<"\nSAP ID  :"<<sapid;
			std::cout<<"\n\n";
		}
};

int main()
{
	Student s;
	std::cout<<"Enter Student Name : ";
	std::cin>>s.stname;
	std::cout<<"Enter Roll No : ";
	std::cin>>s.rollno;
	std::cout<<"Enter SAP ID : ";
	std::cin>>s.sapid;
	s.display();
	return 0;
}

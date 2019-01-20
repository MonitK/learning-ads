#include <iostream>
using namespace std;

class Student
{
	private:
		string stname;
		int rollno;
		double sapid;

	public:
		void input()
		{
			std::cout<<"Enter Student Name : ";
			std::cin>>stname;
			std::cout<<"Enter Roll No : ";
			std::cin>>rollno;
			std::cout<<"Enter SAP ID (afer 5000) : ";
			cin>>sapid;
		}
		void display()
		{
			std::cout<<"\nName    :"<<stname;
			std::cout<<"\nRoll No :"<<rollno;
			std::cout<<"\nSAP ID  :"<<"5000"<<sapid;
			std::cout<<"\n\n";
		}
};

int main()
{
	Student s;
	s.input();
	s.display();
	return 0;
}

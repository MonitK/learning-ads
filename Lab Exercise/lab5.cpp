#include<iostream>
using namespace std;

class Temprature
{
protected:
	float temp_c;
	float temp_f;
public:
	Temprature(int x=0)
	{
		temp_c=x;
	}
	void claculate()
	{
		temp_f=((9/5.0)*temp_c) + 32;
		cout<<"\nTemprature in Fahrenheit - "<<temp_f<<endl;
	}
};

class Temp:public Temprature
{
	float temp_k;
public:
	Temp(int x=0):Temprature(x){}

	void claculate()
	{
		temp_k=temp_c+273;
		cout<<"\nTemprature in Kelvin - "<<temp_k<<endl;
	}
};

int main()
{
	float temp;
	cout<<"Enter the Temprature in celsius - ";
	cin>>temp;
	Temp k(temp);
	k.Temprature::claculate();
	k.Temp::claculate();
	return 0;
}

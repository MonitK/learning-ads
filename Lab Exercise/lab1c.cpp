#include <iostream>
#include <math.h>

using namespace std;

class Perimeter
{
	private:
		float area;
		float p1,p2,p3,p4;
		float length,bredth;
		float height,base,hyp;
		float side;
		float radius;

	public:
		void rectangle()
		{
			area=314;
			length=2;
			bredth=area/length;
			p1= 2*(length + bredth);
			cout<<"Perimeter of rectangle is : "<<p1<<endl;
		}
		void square()
		{
			area=314;
			side=pow(area,0.5);
			p2= 4*side;
			cout<<"Perimeter of square is : "<<p2<<endl;
		}
		void triangle()
		{
			area=314;
			height=4;
			base=(area*2)/height;
			hyp=pow(((base*base)+(height*height)),2);
			p3=height+base+hyp;
			cout<<"Perimeter of triangle is : "<<p3<<endl;
		}
		void circle()
		{
			area =314;
			radius=pow((area/3.14),0.5);
			p4=2*3.14*radius;
			cout<<"Perimeter of circle is : "<<p4<<endl;
		}
		void compare()
		{

			cout<<endl<<endl;
			if(p1>p2 & p1>p3 &p1>p4)
			{
				cout<<"Perimter of rectangle is largest";
			}
			else if(p2>p3 & p2>p4)
			{
				cout<<"Perimter of square is largest";
			}
			else if(p3>p4)
			{
				cout<<"Perimter of triangle is largest";
			}
			else
			{
				cout<<"Perimter of circle is largest";
			}
		}
};

int main()
{
	Perimeter per;

	per.rectangle();
	per.square();
	per.triangle();
	per.circle();
	per.compare();

	return 0;
}

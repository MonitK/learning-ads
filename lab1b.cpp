#include <iostream>

using namespace std;

class Ttable
{
	private:
	   int x,y,z;
	    int c;

	public:
		void calc()
		{
			cout<<"X     Y     Z     XY+Z"<<endl<<endl;
			for(x=0;x<2;x++)
			{
				for(y=0;y<2;y++)
				{
					for(z=0;z<2;z++)
					{
						c=(x&y)|z;
						cout<<x<<"     "<<y<<"     "<<z<<"      "<<c<<endl;
					}
				}
			}
		}
};

int main()
{
	Ttable obj;
	obj.calc();
	return 0;
}

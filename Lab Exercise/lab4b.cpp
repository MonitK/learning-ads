#include <iostream>

using namespace std;

class hydrogen;
class sulphur;
class oxygen;

class oxygen
{
	int o_moles;
	float o_molecules;
public:
	void getO()
	{
		cout<<"\nMoles of Oxygen - ";
		cin>>o_moles;
		cout<<"Weight of Oxygen - ";
		cin>>o_molecules;
	}
	friend void calc(oxygen,hydrogen,sulphur);
};

class hydrogen
{
	int h_moles;
	float h_molecules;
public:
	void getH()
	{
		cout<<"\nMoles of Hydrogen - ";
		cin>>h_moles;
		cout<<"Weight of Hydrogen - ";
		cin>>h_molecules;
	}
	friend void calc(oxygen,hydrogen,sulphur);
};

int main()
{
  return 0;
}

#include <iostream>

using namespace std;

float SumNum (float &a, float &b);
float  SubNum (float &a, float &b);
float MulNum (float &a, float &b);
float DivNum (float &a, float &b);
float ModNum (float &a, float &b);

class calculator
{
    float a,b;
    public:

float SumNum (float &a, float &b);
float  SubNum (float &a, float &b);
float MulNum (float &a, float &b);
float DivNum (float &a, float &b);
float ModNum (float &a, float &b);
};

int main()
{
    int choice;
    int agian = 1;
    float *num1 = new float;
    float *num2 = new float;

   while( agian == 1){
        cout << "Welcome to my simple calculator!" << endl;
        cout << "********************************" << endl;
        cout << "1) Addition (x+y)" << endl;
        cout << "2) Subtraction (x-y)" << endl;
        cout << "3) Multiplication (x*y)" << endl;
        cout << "4) Division (x/y)" << endl;
        cout << "5) Modulation (x%y)" << endl;
        cout << "6) Exit the Calculator" << endl;
        cout << "*********************************" << endl;
        cout << "Please Enter the number of the operator you would like to compute:";
        cin >> choice;
        cout << "Enter the first number of the equation(x) :";
        cin >> *num1;
        cout << "Enter the second number of the equation(y) :";
        cin >> *num2;

        switch (choice)
		{
            case'1':
             cout<<   SumNum(*num1,*num2);
                break;
            case'2':
                cout<<SubNum(*num1,*num2);
                break;
            case'3':
                cout<<MulNum(*num1,*num2);
                break;
            case'4':
                cout<<DivNum(*num1,*num2);
                break;
            case'5':
                cout<<ModNum(*num1,*num2);
                break;
            case'6':
                    cout<<agian == 0;
                break;
        }

    }

   if( agian == 0);
        {
        cout << "Bye!" << endl;
        }


    return 0;
}

float SumNum(float &a, float &b)
{
return(a+b);
}
float SubNum(float &a, float &b)
{
    return(a-b);
}
float MulNum(float &a, float &b)
{
   return(a*b);
}
float DivNum(float &a, float &b)
{
    if(b==0)
	{
    cout << "invalid. cannont divide by 0";
    }
    else
    {
        return(a/b);
    }
}
float ModNum(float &a, float &b)
{
    return(a*b);
}

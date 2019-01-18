#include <iostream>

using namespace std;

class Number {
   public:
      void setNum( double no )
      {
         number = no;
      }
      double getNum( void )
      {
         return number;
      }
      Number()
      {
        cout << "Object is being created" << endl;
      }
      ~Number()
      {
        cout << "Object is being deleted" << endl;
      }

   private:
      double number;
};

int main() {
   Number num;

   num.setNum(7.5);
   cout << "Length of line : " << num.getNum() <<endl;

   return 0;
}

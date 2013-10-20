#include <iostream>
#include <cstdlib>

using namespace std;

class Test{
   private :
            int a, b;
            Test(int _a, int _B)/> : a(_a), b(_B)/> { }

   public :
            int sum() { return (a+B)/>; }
            int display() { cout << sum() << endl; }

};

int main(){
   Test Obj = Test(10, 20); //error!

   Obj.display();
   return (EXIT_SUCCESS);
}

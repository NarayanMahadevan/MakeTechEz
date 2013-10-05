#include <iostream>
using namespace std;

void process(void *dataPtr, int type) {
   int a;
   double b;

   if (type == 1) {
      a = *((int *)dataPtr);
      cout << "int value provided: " << a << endl;
   } else if (type == 2) {
      b = *((float *)dataPtr);
      cout << "float value provided: " << b << endl;
   } else {
      cout << "Invalid type provided: " << endl;
   }
}

int main() {
   int x = 200; 
   float y = 4.4; 
   int *xPtr;
   void *vPtr;

   /* You can assign any address to a void pointer */
   vPtr = &y; /* assigning pointer to float */
   vPtr = &x; /* assigning pointer to int */

   /* We cannot dereference void ptr */
   /* *vPtr = 100; */

   *((int *)vPtr) = 400;
   cout << "Value of x: " << x << endl;

   xPtr = (int *)vPtr;
   *xPtr = 600;
   cout << "Value of x: " << x << endl;

   /* Void pointers allow us to pass any data */
   process(&x, 1);
   process(&y, 2);

   return 0;
}








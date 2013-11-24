#include <iostream>
using namespace std;

int main(){
        int number_one, number_two;
        cout << "Please enter a number" << endl;
        cin >> number_one;
        cout << "Please enter another number" << endl;
        cin >> number_two;
        cout << "The sum of these numbers are" << number_one+number_two << endl
             << "The difference between these numbers are" << number_two * number_one << endl
             << "The product of these numbers are" << number_one*number_two << endl
             << "The quotient of these numbers are" << number_one/ number_two << endl;
        return 0;
}

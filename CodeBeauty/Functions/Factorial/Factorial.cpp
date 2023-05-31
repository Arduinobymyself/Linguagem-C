

#include <iostream>
using namespace std;


int main()
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number; // 3
    
    int factorial = 1; // 1
    // 6! = 1*2*3*4*5*6
    //for (int i = 1; i <= number; i++) { // i=1
    //    factorial *= i;
    //}

    // 6! = 6*5*4*3*2*1
    for (int i = number; i >= 1; i--) {
        factorial *= i;
    }

    cout << number << "! is: " << factorial << endl;
}

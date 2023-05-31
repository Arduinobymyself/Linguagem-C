
#include <iostream>
using namespace std;

bool IsPrimeNumber(int number) {
    // refactored code
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}


int main()
{
    
    //prime number
    int number;
    cout << "Number: ";
    cin >> number;

    //raw code
    /*
    bool isPrimeFlag = true;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrimeFlag = false;
            break;
        }
    }
     
    if (isPrimeFlag) {
      cout << "Is prime" << endl;
    } else {
      cout << "Is not prime" << endl;
    }
    */


    if (IsPrimeNumber(number)) {
        cout << "Is prime" << endl;
    }
    else {
        cout << "Is not prime" << endl;
    }
    cout << "==================================" << endl;

    
    // check a 1000 numbers
    int count = 0;
    for (int i = 1; i < 100000; i++) {
        bool isPrime = IsPrimeNumber(i);
        if (isPrime) {
            count++;
            cout << i << " is prime number" << endl;
        }
    }
    cout << "==================================" << endl;
    cout << "Ther is " << count << " prime number" << endl;




    cin.get();
    return 0;
}

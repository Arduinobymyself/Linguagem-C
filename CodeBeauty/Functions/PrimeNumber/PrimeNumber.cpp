
#include <iostream>
using namespace std;


bool isPrimeNumber(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;

    cout << "Number: ";
    cin >> number;

    /*
    // cheiking if a number is prime or not
    bool isPrime = isPrimeNumber(number);

    if (isPrime) {
        cout << "Is a prime number.\n";
    }
    else {
        cout << "Is not a prime number.\n";
    }
    */

    // checking an interval 1 up to ... number
    int counter = 0;
    for (int i = 1; i <= number; i++) {
        if (isPrimeNumber(i)) {
            cout << i << endl;
            counter++;
        }
    }
    cout << "\nTotal prime: " << counter << endl;



    system("pause>0");
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int number, reversedNumber = 0;
    cout << "Enter a number: ";
    cin >> number;
    int temp = number;

    while (temp != 0) {
        reversedNumber *= 10;
        reversedNumber += temp % 10;
        temp /= 10;
    }

    cout << "The number " << number << " reversed is " << reversedNumber << endl;
}

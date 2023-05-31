
#include <iostream>
using namespace std;

int main()
{
    // count digits of a number
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int temp = number;

    if (temp == 0) cout << "You have entered 0.\n";
    else {
        int counter = 0;
        while (temp > 0 || -temp > 0) {
            temp /= 10;
            counter++;
        }
        cout << "Number " << number << " contains: " << counter << " digits\n";
    }
}

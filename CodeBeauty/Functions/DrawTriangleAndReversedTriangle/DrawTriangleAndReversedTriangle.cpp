
#include <iostream>
#include <iomanip>

using namespace std;



int main()
{
    int length, width;
    char symbol;
    cout << "Length: ";
    cin >> length;
    cout << "Symbol: ";
    cin >> symbol;

    // normal triangle
    cout << "\nNormal Triangle Shape\n";
    for (int i = 1; i <= length; i++) {
        for (int w = 1; w <= i; w++) {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }


    // reversed triangle
    cout << "\nReversed Triangle Shape\n";
    for (int i = length; i >= 1; i--) {
        for (int w = 1; w <= i; w++) {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }


    system("pause>0");
    return 0;
}

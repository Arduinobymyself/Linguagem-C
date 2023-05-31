
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int height;
    int width;
    char symbol;
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the simble: ";
    cin >> symbol;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }
}

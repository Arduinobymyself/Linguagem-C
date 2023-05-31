// studying variables

#include <iostream>
using namespace std;

int main()
{
    /*
    float annualSalary; // creates a float variable
    
    cout << "Pelase enter your annual salary: ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is: " << monthlySalary << endl;
    cout << "In 10 years you will earn: " << annualSalary * 10 << endl;

    char character = 'a'; // creates a character variable
    int yearOfBith = 1971;
    char gender = 'M';
    bool flag = true;
    float averageGrade = 4.5;
    double balance = 6758372635.98;
    */


    cout << "size of int is: " << sizeof(int) << " Bytes." << endl; // 4 bytes
    cout << "Int min value is: " << INT_MIN << endl; // -2147483648 ....... -1
    cout << "Int max value is: " << INT_MAX << endl; // 0 ........ +2147483647

    cout << "Size of unsigned int: " << sizeof(unsigned int) << " Bytes" << endl; // 4 bytes
    cout << "Uint max value is: " << UINT_MAX << endl; // 4294967295


    cout << "size of bool is: " << sizeof(bool) << " Bytes." << endl; // 1
    cout << "size of char is: " << sizeof(char) << " Bytes." << endl; // 1
    cout << "size of float is: " << sizeof(float) << " Bytes." << endl; // 4
    cout << "size of double is: " << sizeof(double) << " Bytes." << endl; // 8

    cout << "Int max value is: " << INT_MAX << endl;
    cout << "Int max + 1 value is: " << INT_MAX+1 << endl; // data type overflow





    system("pause>0");
    return 0;
}

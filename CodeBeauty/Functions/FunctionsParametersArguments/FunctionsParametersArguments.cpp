
#include <iostream>
using namespace std;

// ----- Functions Declaration -----
void IntroduceMe(string name, string city, int age = 0); // function receives 2 parameters and default parameter
// default parameters only at the end of the parameters list

int main()
{
    /*
    IntroduceMe("Marcelo", "Sorocaba", 52); // function invoked with all arguments
    cout << "==============================" << endl;

    IntroduceMe("Anna", "New York");
    cout << "==============================" << endl; // function invoked with only 2 arguments
    */
    

    string name, city;
    int age;

    cout << "Name: ";
    cin >> name;
    cout << "City: ";
    cin >> city;
    cout << "Age: ";
    cin >> age;

    cout << "\n========================================\n";
    IntroduceMe(name, city, age);









    cin.get();
    return 0;
}

// ----- Functions Definition -----

void IntroduceMe(string name, string city, int age) {
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if (age != 0) {
        cout << "I am " << age << " years old" << endl;
    }
    

}

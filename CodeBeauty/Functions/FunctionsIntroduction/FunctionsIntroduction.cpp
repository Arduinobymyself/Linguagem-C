

#include <iostream>
using namespace std;

// function prototype
//void introduceMe(string name, string city, int age = 0); // age = 0 is a default parameter for the function
void introduceMe(string name, string city, int age = 0) {
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if (age != 0) cout << "I am " << age << " years old" << endl;
    cout << endl;
}

int main()
{
    int age;
    string name, city;


    // directly input the required parameters
    introduceMe("Marcelo", "Sorocaba", 52);

    // directly input the required parameters with default parameter
    introduceMe("Anna", "London");


    // receiving the parameters from user
    cout << "Name: ";
    cin >> name;
    cout << "City: ";
    cin >> city;
    cout << "Age: ";
    cin >> age;

    cout << endl;
    introduceMe(name, city, age);
    



    system("pause>0");
    return 0;

}

// function development


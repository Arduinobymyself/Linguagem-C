/*
    DESTRUCTORS
    1. always start with ~ tilda sign 
    2. name is equal of the class
    3. does not have return type
    4. does not receive any parameter
    5. it needs to be a member function of the class
    6. must be placed at public area of the class
    7. it can be only one destructor per class

    Destructor are invoked in reverse order last to first LIFO
    For a simple struct the compiler knows how to destruct this type of data
    but as soon you start using pointers in the user data type, you must create destructors

*/

#include <iostream>
using namespace std;

class Book {
public:
    string Title;
    string Author;
    int* Rates;
    int RatesCounter;

    Book(string title, string author) { // constructor
        Title = title;
        Author = author;
        RatesCounter = 2;
        Rates = new int[RatesCounter];
        Rates[0] = 4;
        Rates[1] = 5;
        cout << Title << " Constructor Invoked" << endl;
    }

    ~Book() { // destructor; tilda sign
        delete[] Rates; // free the space of the allocated array
        Rates = nullptr; // putting null at the allocation address of the memory
        cout << Title << " Destructor Invoked" << endl;

    }

};

int main()
{
    Book book1("millionaire Fastlane", "M. J, DeMarco");
    Book book2("C++ Lambda Story", "Bartek Filipek");
    // Book book3 = book2; // wrong way to copy user data types........




    cin.get();
    return 0;
}

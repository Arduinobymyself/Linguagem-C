
#include <iostream>

// using namespace std; // standard namespace considered a bad practice
// Same as be using:
using std::cout;
using std::endl;
using std::string;
using std::cin;


namespace namespace1 {
    int age = 25;
    string  name = "Marcelo";
}
namespace namespace2 {
    int age = 26;
    string name = "Saldina";
}


int main()

{

    // using namespace std and why is it considered a BAD PRACTICE

    cout << namespace1::age << endl;
    cout << namespace1::name << endl;
    cout << "--------------------------\n\n";

    cout << namespace2::age << endl;
    cout << namespace2::name << endl;
    cout << "--------------------------\n\n";
    






    cin.get();
    // system("pause"); // not recomended due to garbage can be in the buffer of the keyboard
    return 0;
}

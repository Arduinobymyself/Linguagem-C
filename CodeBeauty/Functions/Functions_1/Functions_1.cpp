
#include <iostream>
using namespace std;

// ----- functions declarations ----- 
void Function(); // function prototype

// ----- main function ----- 
int main()
{
    
    cout << "Hello from Main()"<<endl;
    Function();



    cin.get();
    return 0;
}


// ----- funtions definitions ----- 
void Function() {
    cout << "Hello from Function()" << endl;
}

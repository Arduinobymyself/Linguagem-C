#include <iostream>
using namespace std;

int main(){

    //this is my first c++ program
    cout << "Hello World" << endl;

    string fruit = "apple";
    string fruits[5] = {"apple", "orange", "pear", "strawberry", "banana"};

    for(int i =0; i < 5; i++){
        cout << fruits[i] << endl;
    }


    cin.get();
    return 0;

}





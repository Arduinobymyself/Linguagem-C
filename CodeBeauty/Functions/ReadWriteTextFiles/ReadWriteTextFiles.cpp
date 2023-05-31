
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    // your code here

    fstream myFile;
    

    /*
    
    myFile.open("myfile.txt", ios::out); //open in write mode
    // if file does not exists it will create it, if file alread exists it will override it
    if (myFile.is_open()) {
        myFile << "Hello\n";
        myFile << "This is second line\n";
        myFile.close();
    }

    myFile.open("myfile.txt", ios::app); //open in append mode
    // file must exists
    if (myFile.is_open()) {
        myFile << "Hello World\n";
        myFile.close();
    }

    */
    

    cout << "\n==============================================\n";
    myFile.open("myfile.txt", ios::in); //read mode
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    }
    cout << "==============================================\n";


    cout << "\n\nprogram Terminated" << endl;


    cin.get();
    return 0;
}

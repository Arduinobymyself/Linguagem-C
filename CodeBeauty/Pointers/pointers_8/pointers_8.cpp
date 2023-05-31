// ---------- Function Pointers ---------- //
#include <iostream>
#include <vector>

using namespace std;


int getNumber(){
    return 5;
}

int add(int a, int b){
    return a+b;
}


bool ascendingCompare(int a, int b){
    return a < b;
}

bool descendingCompare(int a, int b){
    return a > b;
}

void sortAscending(vector<int>& numbersVector){
    for(int startIndex = 0; startIndex < numbersVector.size(); startIndex++){
        int bestIndex = startIndex;
        for(int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++){
            if(ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex])){
                bestIndex = currentIndex;
            }
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void sortDescending(vector<int>& numbersVector){
     for(int startIndex = 0; startIndex < numbersVector.size(); startIndex++){
        int bestIndex = startIndex;
        for(int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++){
            if(descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex])){
                bestIndex = currentIndex;
            }
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}


void customSort(vector<int>& numbersVector, bool(*compareFuncPtr)(int, int)){
    for(int startIndex = 0; startIndex < numbersVector.size(); startIndex++){
        int bestIndex = startIndex;
        for(int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++){
            if(compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex])){
                bestIndex = currentIndex;
            }
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void printNumbers(vector<int>& numbersVector){
    for(int i = 0; i < numbersVector.size(); i++){
        cout << numbersVector[i] << ' ';
    }
    cout << endl;
}


int main(){

    /*
    cout << getNumber() << endl; // show us the valueof retunr of the function getNumber => 5
    cout << getNumber << endl; // show us the address of the function getNumber in the memory
    */

    /*
    int(*funcPtr)() = getNumber; // a function pointer receives the address of getNumber
    cout << funcPtr() << endl; // prints 5

    cout << "-----------------------" << endl;

    int(*funcPtr2)(int, int) = add;
    cout << add(2, 3) << endl; // 5
    cout << funcPtr2(3, 4) << endl; // 7
    */


    // a real usage for function pointers
    vector<int> myNumbers = {-6, 0, 2, 5, 1, 3, 6, 4, -1, 100};
    sortAscending(myNumbers);
    cout << "Ascending: ";
    printNumbers(myNumbers);
    sortDescending(myNumbers);
    cout << "Descending: ";
    printNumbers(myNumbers);

    cout << endl << "===================================" << endl << endl;

    cout << "Ascending: ";
    customSort(myNumbers, ascendingCompare);
    printNumbers(myNumbers);

    cout << "Descending: ";
    customSort(myNumbers, descendingCompare);
    printNumbers(myNumbers);






    return 0;
}

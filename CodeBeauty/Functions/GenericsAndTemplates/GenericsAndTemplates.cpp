
#include <iostream>
using namespace std;

// template
template<typename T>

void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;

}

// also can use template<class Type>
/*
    void Swap(Type& a, Type& b) {
        Type temp = a;
        a = b;
        b = temp;

    }
*/




//void Swap(int& a, int& b) {
//    int temp = a;
//    a = b;
//    b = temp;
//    
//}
//
//void Swap(char& a, char& b) {  // overloading swap function
//    char temp = a;
//    a = b;
//    b = temp;
//
//}

int main()
{
    // generics and templates
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a, b);
    cout << a << " - " << b << endl;

    char c = 'a', d = 'f';
    cout << c << " - " << d << endl;
    Swap<char>(c, d);
    cout << c << " - " << d << endl;

    system("pause");
    return 0;

}

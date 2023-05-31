
#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;


int main()
{
    // lambda expressions, anonimous functions
    // [capture clause](parameters) {function definition};
    // []() {};


    struct {
        void operator()(int x) {
            cout << x << "\n";
        }
    } something;
    // lambda functio that do the same as above
    //[](int x) {cout << x << "\n"; }
    

    vector <int> v{ 2, 3, 7, 14, 23 };
    //for_each(v.begin(), v.end(), something); // using struct something
    for_each(v.begin(), v.end(), [](int x) {cout << x << "\n"; }); // using lambda function

    for_each(v.begin(), v.end(),
        [](int x) {
            if (x % 2 == 0)
                cout << x << " is even number\n";
            else
                cout << x << " is odd number\n";
        }
    );



    int d = 3, e = 5;
    for_each(v.begin(), v.end(),
        [&d, &e](int x) {
            if (x % d == 0)
                cout << x << " is divisible by " << d << "\n";
            else
                cout << x << " is not divisible by " << d << "\n";
            d = e + 2;
            e += 10;
            cout << "d = " << d << " e = " << e << endl;
        }
    );




    system("pause");
    return 0;

}


#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

float sum(float a, float b, float c = 0) {
    return a + b + c;
}



int main()
{
    cout << sum(2, 4) << endl;
    cout << sum(4.0, 6.0) << endl;
    cout << sum(3.9, 4.5, 7.1) << endl;

    system("pause>0");
    return 0;

}

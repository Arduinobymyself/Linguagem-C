
#include <iostream>
using namespace std;


class EquilateralTriangle {
private:
    float a;
    float circumference;
    float area;
public:
    void setA(float length) {
        a = length;
        circumference = a * 3;
        area = (1.73 * a * a) / 4;
    }
    //friend void PrintResults(EquilateralTriangle); // friend function - need only the type of the parameters....
    friend class Homework; // friend class
};

class Homework {
public:
    void PrintResults(EquilateralTriangle et) {
        // as Circunference and area are private we get error
        // but using Friend Finction ....
        cout << "Circumference = " << et.circumference << endl;
        cout << "Area = " << et.area << endl;
    }
};




int main()
{
    

    EquilateralTriangle et;
    et.setA(3);
    Homework h;
    h.PrintResults(et);
    




    system("pause");
    return 0;
}

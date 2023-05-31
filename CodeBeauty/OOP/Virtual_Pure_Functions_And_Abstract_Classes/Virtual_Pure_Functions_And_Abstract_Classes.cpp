
#include <iostream>
using namespace std;

/*
Virtual function is defined in the base class and redifined in derived class (ability to runtime polymorphism).
If there is no function of base class in the derived class uses the function of base class,
otherwise uses from derived class.
*/


class Instrument {
    // base class
public:

    //virtual void MakeSound() { // this is a virtual class
    //    cout << "Instrument is playing ... \n\n";
    //}

    virtual void MakeSound() = 0; // this is apure virtual function and the class becames an abstract class
                                    // all derived class has to implement your own MakeSound function
};

class Accordion: public Instrument {
    // Accordion derives from base class Instrument
public:
    void MakeSound() { 
        cout << "Accordion is playing ... \n\n";
    }
};

class Piano: public Instrument {
    void MakeSound() {
        cout << "Piano is playing ... \n\n";
    }
};


int main()
{
    /*Instrument i1;
    i1.MakeSound();*/


    Instrument* i1 = new Accordion();
    i1->MakeSound(); // as i1 is a pointe we use -> to access its members

    Instrument* i2 = new Piano();
    i2->MakeSound();

    Instrument* instruments[2] = { i1, i2 };
    for (int i = 0; i < 2; i++) {
        instruments[i]->MakeSound();
    }


    system("pause");
    return 0;
}

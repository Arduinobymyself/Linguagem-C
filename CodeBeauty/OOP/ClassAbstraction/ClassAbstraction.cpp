
#include <iostream>
using namespace std;

/*
Abstraction means showing and displaying the important information 
while riding the unimportant and complex details.
Example: a coffe machine, you put coffe and water and press a button thats is the important content
we do not know the details on how the coffee machine works.
In programming we hide complex details behind simple procedures and functions.
End user must not know how complex is the code.

Abstract class must have at least one pure virtual function.

*/


class SmartPhone { // abstract clas
    // we cannot create instances of a abstract classe but we can create pointers of it
public:
    virtual void TakeASelfie() = 0; // pure virtual function
    virtual void MakeACall() = 0;
    virtual void SendAMessage() = 0;
};

class Android : public SmartPhone { // derived class
    //must implement all pure virtual functions of base class
public:
    void TakeASelfie() {
        cout << "Android is taking a selfie, say Cheese!\n\n";
    }

    void MakeACall() {
        cout << "Android is Calling ... \n\n";
    }

    void SendAMessage() {
        cout << "Android is sending a message ... \n\n";
    }
};

class Iphone : public SmartPhone {
public:
    void TakeASelfie() {
        cout << "Iphone is taking a selfie, say Cheese!\n\n";
    }

    void MakeACall() {
        cout << "Iphone is Calling ... \n\n";
    }

    void SendAMessage() {
        cout << "Iphone is sending a message ... \n\n";
    }
};


int main()
{
    SmartPhone* s1 = new Android(); // pointer to a class
    s1->TakeASelfie(); // accessing the class member (operator -> not .)
    s1->MakeACall();
    s1->SendAMessage();

    SmartPhone* s2 = new Iphone();
    s2->TakeASelfie();
    s2->MakeACall();
    s2->SendAMessage();





    system("pause");
    return 0;
}

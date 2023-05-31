
#include <iostream>
using namespace std;

// structs are a  blueprint
struct SmartPhone {
    string name;
    int storageSpace;
    string color;
    double price;
};

struct Person {
    string name;
    int age;
    struct SmartPhone sm;
};

void PrintSmartPhoneInfo(SmartPhone smartphone) {
    cout << "Smart Phone name: " << smartphone.name << endl;
    cout << "Color: " << smartphone.color << endl;
    cout << "Storage Space: " << smartphone.storageSpace << "GB" << endl;
    cout << "Price: " << smartphone.price << endl;
    cout << "---------------------------------------------------\n\n";
}

void PrintPersonInfo(Person person) {
    cout << "Person Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    PrintSmartPhoneInfo(person.sm);
}

int main()
{
    // your code here!
    SmartPhone sm1;
    sm1.color = "Gray";
    sm1.name = "Samsung Galaxy S21 Ultra";
    sm1.price = 2999.99;
    sm1.storageSpace = 256;

    PrintSmartPhoneInfo(sm1);

    SmartPhone sm2;
    sm2.color = "Black";
    sm2.name = "iPhone";
    sm2.price = 3999.99;
    sm2.storageSpace = 128;

    PrintSmartPhoneInfo(sm2);
    

    Person ps;
    ps.name = "Marcelo";
    ps.age = 52;
    ps.sm = sm1;

    PrintPersonInfo(ps);

    


    cin.get();
    return 0;
}

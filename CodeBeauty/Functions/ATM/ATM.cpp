
#include <iostream>
using namespace std;

void showMenu() {
    cout << "********** MENU ***********" << endl;
    cout << "1. Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "0. Exit" << endl;
    cout << "****************************" << endl << endl;
    cout << "Make your choice: ";
}



int main()
{
    // show menu to balance, deposit and withdraw
    
    int option;
    double balance = 500.00;


    
    do {
        showMenu();
        cin >> option;
        system("cls");
        switch (option) {
        case 1:
            cout << "\nBalance is: " << balance << "$\n\n" << endl;
            break;
        case 2:
            cout << "\nDeposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            cout << "\nWithdraw amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance) {
                balance -= withdrawAmount;
            }
            else {
                cout << "\nNot enough money!\n\n" << endl;
            }
            break;
        }
    } while (option != 0);
    cout << "\n\nExiting... " << endl;


    


    system("pause>0");
    return 0;
}

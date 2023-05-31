#include <iostream>
#include <iomanip> // for adjust precision of float point numbers

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(int argc, char** argv) {
	
	double balance = 0.0;
	int choice = 0;
	
	
	do{
		cout << "***********************\n";
		cout << "Enter your choice:\n";
		cout << "***********************\n";
		cout << "1. Show balance\n";
		cout << "2. Deposit\n";
		cout << "3. Withdraw\n";
		cout << "4. Exit:\n";
		cout << "***********************\n\n";

		cin >> choice;
		
		cin.clear();
		fflush(stdin); // these 2 lines is to preventing errors by inputing strings or more characters from the keyboard

		switch(choice){
			case 1:
				showBalance(balance);
				break;
			case 2:
				balance += deposit();
				showBalance(balance);
				break;
			case 3:
				balance -= withdraw(balance);
				showBalance(balance);
				break;
			case 4:
				cout << "Thanks for visiting." << "\n\n";
				break;
			default:
				cout << "Invalid choice." << "\n\n";
				break;
		};
	} while (choice != 4);

	
	return 0;
	
}

void showBalance(double balance){
	cout << "Your balance is $" << setprecision(2) << fixed << balance << "\n\n";
}

double deposit(){
	double amount = 0;
	cout << "Enter amount to be deposited: ";
	cin >> amount;
	if(amount > 0){
		return amount;
	} else {
		cout << "That is a not valid amount." << "\n\n";
	}
	
}

double withdraw(double balance){
	double amount = 0;
	cout << "Enter amount to be withdrawn: ";
	cin >> amount;
	if(amount > balance){
		cout << "Insufficient funds." << "\n\n";
	} else if(amount < 0){
		cout << "That is a not valid amount." << "\n\n";
	} else {
		return amount;
	}
	
	
	
}

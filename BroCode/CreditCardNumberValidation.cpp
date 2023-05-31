#include <iostream>
#include <string>
using namespace std;

/*
Luhn Algorithm
1. Double every second digit from right to left
	If doubled number  is 2 digits, split them
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. Sum results from steps 2 & 3
5. If step 4 is divisible by 10, # is valid

eg.
6011000990139424
6011   0009   9013   9424
6 1    0 0    9 1    9 2
1 2 2  0 0    1 8 2  1 8 4
29
 0 1    0 9    0 3    4 4
21
50 % 10 = valid

*/


int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main(int argc, char** argv) {
	
	string cardNumber;
	int result;
	cout << "Enter the credit card number: ";
	cin >> cardNumber;
	
	result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
	if(result % 10 == 0){
		cout << "\nCredit Card Number is valid!";
	} else {
		cout << "\nCredit Card Number is not valid!";
	}

	
	
	return 0;
}


int getDigit(const int number){
	return number % 10 + (number / 10 % 10);
	// eg. 18 => 9
	// 18 % 10 = 8
	// 18 / 10 = 1 , 1 % 10 = 1
	// 8 + 1 = 9
}
int sumOddDigits(const string cardNumber){
	int sum = 0;
	for(int i = cardNumber.size() - 1; i >= 0; i -= 2){
		sum += cardNumber[i] - '0';
	}
	return sum;
}
int sumEvenDigits(const string cardNumber){
	
	int sum = 0;
	for(int i = cardNumber.size() - 2; i>= 0; i -= 2){
		sum += getDigit((cardNumber[i] - '0') * 2);
	}
	return sum;
}



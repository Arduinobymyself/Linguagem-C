#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// functions declaration
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

// main program
int main(int argc, char** argv) {
	
	char player, computer;
	
	player = getUserChoice();
	cout << "Your choice: ";
	showChoice(player);
	
	computer = getComputerChoice();
	cout << "computer's choice: ";
	showChoice(computer);
	
	chooseWinner(player, computer);
	
	
	
	
	
	return 0;
}

// functions definition
char getUserChoice(){

	char player;
	
	do{
		cout << "*************************\n";
		cout << "Rock-Paper_Scissors Game!\n";
		cout << "*************************\n";
		cout << "'r' for rock\n";
		cout << "'p' for paper\n";
		cout << "'s' for scissors\n";
		cout << "*************************\n\n";
		cout << "Make your choice: ";

		cin >> player;
		

	} while(player != 'r' && player != 's' && player != 'p');
	
	return player;
	
}

char getComputerChoice(){

	srand(time(0));
	int num = rand()%3+1;
	switch(num){
		case 1: return 'r';
		case 2: return 'p';
		case 3: return 's';
	}
	return 0;
}

void showChoice(char choice){
	switch(choice){
		case 'r':
			cout << "Rock\n";
			break;
		case 'p':
			cout << "Paper\n";
			break;
		case 's':
			cout << "Scissors\n";
			break;
	}
}

void chooseWinner(char player, char computer){
	switch(player){
		case 'r':
			if(computer == 'r'){
				cout << "It is a tie!\n";
			} else if(computer == 'p'){
				cout << "You lose!\n";
			} else {
				cout << "you win!\n";
			}
			break;
		case 'p':
			if(computer == 'p'){
				cout << "It is a tie!\n";
			} else if(computer == 's'){
				cout << "You lose!\n";
			} else {
				cout << "you win!\n";
			}
			break;
		case 's':
			if(computer == 's'){
				cout << "It is a tie!\n";
			} else if(computer == 'r'){
				cout << "You lose!\n";
			} else {
				cout << "you win!\n";
			}
			break;
	}
}

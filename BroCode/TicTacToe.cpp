#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


// function declaration
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


int main(int argc, char** argv) {

	char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	char player = 'X';
	char computer = 'O';
	bool running = true;
	
	drawBoard(spaces);
	while(running){
		playerMove(spaces, player);
		system("cls");
		drawBoard(spaces);
		if(checkWinner(spaces, player, computer)){
			running = false;
			break;
		} else if(checkTie(spaces)){
			running = false;
			break;
		}
		
		computerMove(spaces, computer);
		system("cls");
		drawBoard(spaces);
		if(checkWinner(spaces, player, computer)){
			running = false;
			break;
		} else if(checkTie(spaces)){
			running = false;
			break;
		}
		
	}
	cout << "\n\nThanks for playing TicTacToe!\n\n";


	return 0;

}




// function definition
void drawBoard(char *spaces){
	cout << "\n\n";
	cout << "_________________" << "\n";
	cout << "     |     |     " << "\n";
	cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << "\n";
	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";
	cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << "\n";
	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";
	cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << "\n";
	cout << "_____|_____|_____" << "\n\n";
	
	
}

void playerMove(char *spaces, char player){
	int number;
	do{
		cout << "Enter a spot to place a marker (1 - 9)";
		cin >> number;
		number--;
		if(spaces[number] == ' '){
			spaces[number] = player;
			break;
		}
	} while(!number > 0 || !number < 8);
}

void computerMove(char *spaces, char computer){
	int number;
	srand(time(0));
	while(true){
		number = rand() % 9;
		if(spaces[number] == ' '){
			spaces[number] = computer;
			break;
		}
	}
}

bool checkWinner(char *spaces, char player, char computer){
	// check rows
	if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
		spaces[0] == player ? cout << "\nYOU WIN!\n" :  cout << "\nYOU LOSE!\n";
	}
	else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
		spaces[3] == player ? cout << "\nYOU WIN!\n" :  cout << "\nYOU LOSE!\n";
	}
	else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
		spaces[6] == player ? cout << "\nYOU WIN!\n" :  cout << "\nYOU LOSE!\n";
	}
	// check collunms
	else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
		spaces[0] == player ? cout << "\nYOU WIN!\n" :  cout << "\nYOU LOSE!\n";
	}
	else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
		spaces[1] == player ? cout << "\nYOU WIN!\n" :  cout << "\nYOU LOSE!\n";
	}
	else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
		spaces[2] == player ? cout << "\nYOU WIN!\n" :  cout << "\nYOU LOSE!\n";
	}
	// check diagonals
	else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
		spaces[0] == player ? cout << "\nYOU WIN!\n" :  cout << "\nYOU LOSE!\n";
	}
	else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
		spaces[2] == player ? cout << "\nYOU WIN!\n" :  cout << "\nYOU LOSE!\n";
	} else {
		return false;
	}
	
	
	
	
	return true;
}

bool checkTie(char *spaces){
	for(int i = 0; i < 9; i++){
		if(spaces[i] == ' '){
			return false;
		}
	}
	cout << "\nIT IS A TIE\n";
	return true;
}

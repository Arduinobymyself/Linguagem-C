/*
	Simple Betting Game
	Jack Queen King - computer shuffles these cards
	Player has to guess the position of Queen.
	If he wins, he takes 3*bet.
	If he looses, he looses the bet amount.
	Player has $100 initially
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int cash = 100;

void play(int bet){
	int playerGuess;
	int i;
	
	char *C = (char*)malloc(3*sizeof(char)); // allocated on the Heap
	C[0] = 'J';
	C[1] = 'Q';
	C[2] = 'K';
	
	// or just: char C[3] = { 'j', 'Q', 'K'}; allocated on the Stack
	
	printf("Shuffling ... \n");
	srand(time(NULL)); // seeding random number generator
	
	for(i=0; i<5; i++){
		int x = rand()%3; // a number between 0 and 2 0
		int y = rand()%3;
		
		//Swaps character at position x and y
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp;
		
	}
	
	printf("What's the position of Queen - 1, 2 or 3?");
	scanf("%d", &playerGuess);
	
	if(C[playerGuess - 1] == 'Q'){
		cash += 3*bet;
		printf("You Win! Result = \"%c %c %c\" Total Cash = $%d", C[0], C[1], C[2], cash);
	} else{
		cash -= bet;
		printf("You Loose! Result = \"%c %c %c\" Total Cash = $%d", C[0], C[1], C[2], cash);
	}
	
	free(C);
	
	
}

int main(){
	
	int bet;
	printf("================================================================================\n");
	printf("======================== Welcome to the Virtual Cassino ========================\n");
	printf("================================================================================\n");
	printf("=                            Total cash = $%d                                 =\n", cash);
	printf("================================================================================\n");
	
	while(cash > 0){
		printf("Whats your bet? $");
		scanf("%d", &bet);
		if(bet == 0 || bet > cash) break;
		play(bet);
		printf("\n================================================================================\n");
	}
	
	

	return 0;
}



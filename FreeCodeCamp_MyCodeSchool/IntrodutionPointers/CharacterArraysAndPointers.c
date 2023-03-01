#include <stdio.h>
#include <string.h>

void print(char* C){
	int i = 0;
	while(*(C+i) != '\0'){ // *(C+i) its same as C[i]
		printf("%c", *(C+i));
		i++;
	}
	printf("\n");
}


int main(){
	
	/*
	char C[20]; // => C[] = "JOHN"; or C[5] = {'J', 'O', 'H', 'N', '\0'}; 
	C[0] = 'J';
	C[1] = 'O';
	C[2] = 'H';
	C[3] = 'N';
	C[4] = '\0';

	int len = strlen(C);
	printf(C);
	printf("\nLength = %d\n", len);
	printf("Size = %d\n", sizeof(C));
	*/
	
	char C[20] = "Hello";
	print(C);
	
	
}

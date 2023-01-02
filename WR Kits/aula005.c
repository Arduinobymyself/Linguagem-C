#include <stdio.h>
#include <stdlib.h>

/*
	aula 005 - operadores lógicos
*/

int main(){
	
	char a = 1;
	char b = 2;
	char c = 3;
	char d = 1;
	
	if(a > b && a < c){
		printf("\nCondicao 1 verdadeira.\n");
	}
	
	if( c == d || d == a){
		printf("\nCondicao 2 verdadeira.\n");
	} else {
		printf("\nNenhuma condicao verdadeira");
	}

	
	
	system("pause");
	return 0;
}

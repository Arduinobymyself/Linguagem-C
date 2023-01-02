#include <stdio.h>
#include <stdlib.h>

/*
	aula 007 - la�o de condi��o if()
	
	if(condi��o){
		bloco de comandos se condi��o verdadeira;
	}
	
	if(condi��o) bloco de comandos se condi��o verdadeira;
	
	if(condi��o 1){
		bloco de comandos se condi��o 1 verdadeira;
	} else if(condi��o 2){
		bloco de comandos se condi��o 2 verdadeira;
	} else {
		bloco de comandos se nenhuma das condi��es verdadeira;
	}
	
*/

int main(){
	
	int A, B;
	
	printf("\nDigite um valor para A: ");
	scanf("%d", &A);
	getchar();
	printf("\nDigite um valor para B: ");
	scanf("%d", &B);
	getchar();
	
	
	
	if(A < B){
		printf("\nA menor que B\n");
	} else if(B < A){
		printf("\nB menor que A\n");
	} else {
		printf("\nA igual a B\n");
	}
	printf("\n\n");
	

	
	system("pause");
	return 0;
}

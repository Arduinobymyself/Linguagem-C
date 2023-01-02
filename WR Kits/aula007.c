#include <stdio.h>
#include <stdlib.h>

/*
	aula 007 - laço de condição if()
	
	if(condição){
		bloco de comandos se condição verdadeira;
	}
	
	if(condição) bloco de comandos se condição verdadeira;
	
	if(condição 1){
		bloco de comandos se condição 1 verdadeira;
	} else if(condição 2){
		bloco de comandos se condição 2 verdadeira;
	} else {
		bloco de comandos se nenhuma das condições verdadeira;
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

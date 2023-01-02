#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula037 - funções que retornam inteiros
	
	int nome_da _função(parametros/argumentos){
		bloco de comandos;
	}
	
*/

int soma(int n1, int n2);
int ssubtracao(int n1, int n2);
int multiplicacao(int n1, int n2);
int divisao(int n1, int n2);

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	printf("\nSoma \t\t= %d", soma(6, 3));
	printf("\nSubtração \t= %d", subtracao(6, 3));
	printf("\nMultiplicação   = %d", multiplicacao(6, 3));
	printf("\nDivisão \t% = %d", divisao(6, 3));

	printf("\n\n");
	//system("pause");
	return 0;
}


int soma(int n1, int n2){
	return n1 + n2;
}
int subtracao(int n1, int n2){
	return n1 - n2;
}
int multiplicacao(int n1, int n2){
	return n1 * n2;
}
int divisao(int n1, int n2){
	return n1 / n2;
}

/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	int N = 6;
	int i, j, cont = 0;
	for(i=0; i<= N; i++){
		for(j=1; j<= i; j++){
			cont++;
			printf("%d ", cont);
		}
		printf("\n");
	}


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


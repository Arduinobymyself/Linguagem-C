/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
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
	printf("\n\n");
	
	if(argc == 1){
		printf("Programa %s sem par�metros\n", argv[0]);
	} else{
		int i, soma = 0;
		printf("Soma dos par�metros do programa %s: \n", argv[0]);
		for(i=1; i<argc; i++){
			soma += atoi(argv[i]);
			// fun��o atoi(); converte string para inteiro, biblioteca <stdlib.h>
		}
		printf("Soma = %d", soma);
	}
	




	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


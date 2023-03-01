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
float serieS(int n);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	printf("S�rie S = %f\n", serieS(5));


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //

float serieS(int n){
	if(n>0){
		return (1+n*n)/(float)n+serieS(n-1);
	} else{
		return 0;
	}
}


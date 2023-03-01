/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	Programa para calcular o n�mero de Euler "e"
	Dado um n�mero inteiro e positivo N, calcular o n�mero de Euler segundo a f�rmula:
	e = 1 + 1/1! + 1/2! + 1/3! + .... + 1/N!

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
	

	int N = 10;
	int i, j;
	float f, E = 1.0;
	
	for(i=1; i<=N; i++){
		f = 1;
		for(j=1; j<=i; j++){
			f = f * j;
		}
		E = E + 1.0 / f;
	}
	printf("E = %f\n", E); // 2.718282


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


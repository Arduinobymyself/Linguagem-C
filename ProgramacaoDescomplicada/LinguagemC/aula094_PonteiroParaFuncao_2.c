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
#include <math.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //
int executa(int (*ptr)(int, int), int x, int y){
	return ptr(x, y);
}

int max(int a, int b){
	return a>b ? a : b;
}

int soma(int a, int b){
	return a+b;
}

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	int x, y, z;
	int (*p)(int, int);
	printf("Digite 2 n�meros: ");
	scanf("%d %d", &x, &y);

	printf("Maior = %d\n", executa(max, x, y));
	printf("Soma = %d\n", executa(soma, x, y));


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


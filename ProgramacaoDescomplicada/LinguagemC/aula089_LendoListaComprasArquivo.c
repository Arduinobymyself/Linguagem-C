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
	

	char produtos[30];
	float qtde, valor, total = 0;
	FILE *fp = fopen("compras.txt", "r");
	if(fp == NULL){
		printf("Erro na abertura do arquivos.\n");
		system("pause");
		exit(1);
	}
	while(!feof(fp)){
		fscanf(fp, "%s		%f	%f", produtos, &qtde, &valor);
		total += qtde*valor;
	}
	printf("Total = %f\n", total);
	


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


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
float mediaVetor(int *vetor, int n, int tamanho);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	int v[5] = {1, 2, 3, 4, 5};
	printf("M�dia = %f\n", mediaVetor(v, 5, 5));

	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //

float mediaVetor(int *vetor, int n, int tamanho){
	if(n<=0){
		return 0;
	} else{
		return vetor[n-1]/(float)tamanho+mediaVetor(vetor, n-1, tamanho);
	}
}

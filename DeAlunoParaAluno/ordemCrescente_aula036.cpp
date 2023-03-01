/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //
void ordemCrescente(int vetor[], int n);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	int i;
	int vetor[10] = {6, 5, 7, 3, 8, 2, 9, 0, 1, 4};

	ordemCrescente(vetor, 10);
	for(i=0; i<10; i++){
		printf("%d ", vetor[i]);
	}

	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //

void ordemCrescente(int vetor[], int n){
	int i, j, temp;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(vetor[i] > vetor[j]){
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;	
			}
			
		}
	}
}

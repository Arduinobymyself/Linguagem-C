/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	aula065 - Aloa��o Din�mica - Aloca��o de Matrizes
	
	Aloca��o de Arrays Multidimensionais
	Para alocar um array com mais de uma dimens�o, precisamos
	utilizar o conceito de ponteiro para ponteiros.
	
	Ponteiro (1 n�vel): cria um vetor
	int *p = (int*) malloc(5*sizeof(int));
	
	Ponteiro para ponteiro (2 n�veis): cria uma matriz
	int **m;
	
	Ponteiro para ponteiro para ponteiro (3 n�veis): permite
	criar um array de 3 dimens�es
	int ***d
	
	Em um ponteiro para ponteiro, cada n�vel do Ponteiro 
	permite ciar uma nova dimens�o no array.
	Exemplo:
	int* -> permite criar um array de int
	int** -> permite criar um array de int*
	
	int**p; // 2 dimens�es
	int i, j, n=2;
	p = (int**) malloc(n*sizeof(int*)); // cria um array de ponteiros int*
	for(i=0; i<n; i++){
		p[i] = (int*) malloc(n*sizeof(int)); // cria um array de int
		for(j=0; j<n; j++){
			printf("p[%d][%d] ", i, j);
			scanf("%d", &p[i][j]);
		}
	}
	
	Imprimindo a matriz
	
	printf("\n\n")	;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("p[%d][%d] = %d", i, j, (p[i][j]));
			printf("\n");
		}
	}
	
	Em um array com mais de uma dimens�o, a mem�ria �
	liberada na ordem inversa de aloca��o
	primeiro colunas depois linhas.
	
	for(i=0; i<n; i++){
		free(p[i]); // libera as olunas
	}
	free(p); // libera as linhas
	
	

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int**p; // 2 dimens�es
	int i, j, n=2;
	p = (int**) malloc(n*sizeof(int*)); // cria um array de ponteiros int*
	for(i=0; i<n; i++){
		p[i] = (int*) malloc(n*sizeof(int)); // cria um array de int
		for(j=0; j<n; j++){
			printf("p[%d][%d] ", i, j);
			scanf("%d", &p[i][j]);
		}
	}
	printf("\n\n")	;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("p[%d][%d] = %d", i, j, (p[i][j]));
			printf("\n");
		}
	}
	
	
	
	for(i=0; i<n; i++){
		free(p[i]);
	}
	free(p);
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


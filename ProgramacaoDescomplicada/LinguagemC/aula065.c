/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:
	aula065 - Aloação Dinâmica - Alocação de Matrizes
	
	Alocação de Arrays Multidimensionais
	Para alocar um array com mais de uma dimensão, precisamos
	utilizar o conceito de ponteiro para ponteiros.
	
	Ponteiro (1 nível): cria um vetor
	int *p = (int*) malloc(5*sizeof(int));
	
	Ponteiro para ponteiro (2 níveis): cria uma matriz
	int **m;
	
	Ponteiro para ponteiro para ponteiro (3 níveis): permite
	criar um array de 3 dimensões
	int ***d
	
	Em um ponteiro para ponteiro, cada nível do Ponteiro 
	permite ciar uma nova dimensão no array.
	Exemplo:
	int* -> permite criar um array de int
	int** -> permite criar um array de int*
	
	int**p; // 2 dimensões
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
	
	Em um array com mais de uma dimensão, a memória é
	liberada na ordem inversa de alocação
	primeiro colunas depois linhas.
	
	for(i=0; i<n; i++){
		free(p[i]); // libera as olunas
	}
	free(p); // libera as linhas
	
	

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int**p; // 2 dimensões
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

// --- desenvolvimento das funções auxiliares --- //


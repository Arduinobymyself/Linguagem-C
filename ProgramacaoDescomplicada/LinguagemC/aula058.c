/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:
	Programação Descomplicada
	aula 058 - Ponteiros e Arrays
	
	Array: Conjunto de dados armazenados de forma sequencial
	
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
	
	int vetor[5] = {1, 2, 3, 4, 5};
	int *p = vetor;
	int i;
	for(i = 0; i < 5; i++){
		printf("%d ", p[i]);
	}
	printf("\n");
	
	// o nome do array é apenas um ponteiro para o 
	// primeiro elemento do array
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("%d ", *(p + i));
	}
	printf("\n");
	
	// a notação de colchetes [] é apenas uma simplificação
	// da aritmética de ponteiros com acesso ao conteúdo
	printf("\n");	
	printf("vet[2] = %d\n", vetor[2]);
	printf("vet[2] = %d\n", *(vetor + 2));
	
	// acessando o endereço de um elemento do array
	printf("\n");	
	printf("&vet[2] = %d\n", &vetor[2]);
	printf("&vet[2] = %d\n", (vetor + 2));
	
	printf("\n");	
	int *pvet[2];
	int x = 10, y[2] = {20,30};
	pvet[0] = &x;
	pvet[1] = y;
	printf("pvet[0] = %p\n", pvet[0]); // &x
	printf("pvet[1] = %p\n", pvet[1]); // &y[0]
	printf("*pvet[0] = %d\n", *pvet[0]); // x = 10
	printf("*pvet[1][1] = %d\n", pvet[1][0]); // y[0] = 20 
	printf("*pvet[1][1] = %d\n", pvet[1][1]); // y[1] = 30 
	
	
	
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


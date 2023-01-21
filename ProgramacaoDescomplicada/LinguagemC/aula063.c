/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	aula063 - Aloa��o Din�mica - calloc()
	
	Fun��o calloc(): serve para alocar mem�ria durante a execu��o do programa.
	Ela faz o pedido de mem�ria ao processador e retorna um ponteiro com o
	endere�o do in�cio o bloco de mem�ria alocado.
	
	Prot�tipo:
	void* calloc(unsigned int num, unsigned int size);
	
	Funcionamento:
	A fun��o calloc() recebe por par�metro
	- a quantidade de elementos no array a ser alocado 
	- tamanho de cada elemento do array
	e retorna;
	- NULL, no caso de erro;
	- ponteiro para a primeria posi��o do array;
	
	Exemplo:
	int *v = (int*) calloc(50,4); // cria array de 50 inteiros (200 bytes)
	char *c = (char*) alloc(200,1); // cria array de 200 char (200 bytes)
	
	Na aloca��o da mem�ria, deve-se levar em conta o tamanho do tipo.
	Exemplo:
	int *v = (int*) calloc(50,4); // cria array de 50 inteiros (200 bytes)
	char *c = (char*) calloc(200,1); // cria array de 200 char (200 bytes)

	Solu��o: usar sizeof();
	int *v = (int*) calloc(50*sizeof(int)); // cria array de 50 inteiros (200 bytes)
	char *c = (char*) calloc(50*sizeof(char)); // cria array de 50 char (50 bytes)
	
	Se n�o houver espa�o em mem�ria sufuciente para aloca��o requisitada,
	a fun��o calloc() retorna NULL.
	Isso deve ser checado no programa
	
	int *p, i;
	p = (int *) calloc(5*sizeof(int));
	if(p == NULL){
		printf("Erro! Sem mem�ria\n");
		exit(1);
	}
	for(i = 0; i < 5; i++){
		printf("Digite p[%d] ", i);
		scanf("%d", &p[i]);
	}
	printf("\n");
	    for(i = 0; i < 5; i++){
		printf("%d ", p[i]);
	}
	
	A Fun��o free(); sempre que alocamos mem�ria � necess�rio liber�-la
	quando ela n�o or mais necess�ria.
	
	free(p);
	
	malloc x calloc:
	Ambas tem o mesmo prop�sito, mas callo() inicializa todos os bits do espa�o 
	alocada com 0s.
	
	int *p, *p1, i;
	p = (int *) malloc(5*sizeof(int));
	p1 = (int *) calloc(5,sizeof(int));
	
	printf("calloc \t\t malloc\n");
	for(i = 0; i < 5; i++){
		printf("p1[%d] = %d \t", i, p1[i]); // mostra todos os espa�os com zeros
		printf(" p[%d] = %d\n", i, p[i]);   // pode mostrar lixo de mem�ria
	}
	
	free(p);
	free(p1);





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
	
	int *p, *p1, i;
	p = (int *) malloc(5*sizeof(int));
	p1 = (int *) calloc(5,sizeof(int));
	
	printf("calloc \t\t malloc\n");
	for(i = 0; i < 5; i++){
		printf("p1[%d] = %d \t", i, p1[i]);
		printf(" p[%d] = %d\n", i, p[i]);
	}
	
	free(p);
	free(p1);
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


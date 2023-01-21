/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	aula062 - Aloa��o Din�mica - malloc()
	
	Fun��o malloc(): serve para alocar mem�ria durante a execu��o do programa.
	Ela faz o pedido de mem�ria ao processador e retorna um ponteiro com o
	endere�o do in�cio o bloco de mem�ria alocado.
	
	Prot�tipo:
	void* malloc(unsigned int num);
	
	Funcionamento:
	A fun��o malloc() recebe por par�metro
	- a quantidade de bytes a ser alocado e retorna;
	- NULL, no caso de erro;
	- ponteiro para a primeria posi��o do array;
	
	Exemplo:
	int *v = malloc(200); // cria array de 50 inteiros (200 bytes)
	char *c = malloc(200); // cria array de 200 char (200 bytes)
	
	Na aloca��o da mem�ria, deve-se levar em conta o tamanho do tipo.
	Exemplo:
	int *v = (int*) malloc(200); // cria array de 50 inteiros (200 bytes)
	char *c = (char*) malloc(200); // cria array de 200 char (200 bytes)

	Solu��o: usar sizeof();
	int *v = (int*) malloc(50*sizeof(int)); // cria array de 50 inteiros (200 bytes)
	char *c = (char*) malloc(50*sizeof(char)); // cria array de 50 char (50 bytes)
	
	Se n�o houver espa�o em mem�ria sufuciente para aloca��o requisitada,
	a fun��o malloc() retorna NULL.
	Isso deve ser checado no programa
	
	int *p, i;
	p = (int *) malloc(5*sizeof(int));
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
	
	int *p, i;
	p = (int *) malloc(5*sizeof(int));
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
	free(p);
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


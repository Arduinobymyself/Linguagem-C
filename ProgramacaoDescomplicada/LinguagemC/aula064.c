/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	aula064 - Aloa��o Din�mica - realloc()
	
	Fun��o realloc(): serve para alocar mem�ria durante a execu��o do programa.
	Ela faz o pedido de mem�ria ao processador e retorna um ponteiro com o
	endere�o do in�cio o bloco de mem�ria alocado.
	
	Prot�tipo:
	void* realloc(void* ptr, unsigned int num);
	
	Funcionamento:
	A fun��o realloc() recebe por par�metro
	- ponteiro para um bloco de mem�ria j� aloado;
	- a quantidade de bytes a ser alocada.
	e retorna;
	- NULL, no caso de erro;
	- ponteiro para a primeria posi��o do array;
	
	Exemplo:
	int *v = (int*) malloc(200); // cria array de 50 inteiros (200 bytes)
	v = (int*) realloc(v,400); // aumenta para 100 inteiros (400 bytes)
	
	Na aloca��o da mem�ria, deve-se levar em conta o tamanho do tipo.
	Exemplo:
	int *v = (int*) malloc(200); // cria array de 50 inteiros (200 bytes)
	v = (int*) realloc(v,400); // aumenta para 100 inteiros (400 bytes)

	Solu��o: usar sizeof();
	int *v = (int*) malloc(50*sizeof(int); // cria array de 50 inteiros (200 bytes)
	v = (int*) realloc(v,100*sizeof(int)); // aumenta para 100 inteiros (400 bytes)
	
	Se o ponteiro para o bloco de mem�ria previamente alocado for NULL, a fun��o realloc()
	ir� alocar mem�ria da mesma forma como a fun��o malloc()
	int *p;
	p = (int*) realloc(NULL, 50*sizeof(int));
	equivale a:
	p = (int*) malloc(ro*sizeof(int));
	
	Se o tamanho de mem�ria solicitada for igual a ZERO realloc() ir�
	liberar a mem�ria da mesma forma como a fun��o free().
	int *p = (int*) malloc(50*sizeof(int));
	p = (int*) realloc(p, 0);
	equivale a:
	free(p);
	
	CUIDADO: se n�o houver mem�ria suficiente para alocar a mem�ria requisitada,
	a fun��o realloc() retornar� NULL.
	int *p = (int*) malloc(5*sizeof(int));
	int *p1 = (int*) realloc(p, 15*sizeof(int));
	if(p1 != NULL){
		p = p1; // isso evita a perda de informa��o de p
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
	
	int *p, *p1, i;
	p = (int *) malloc(5*sizeof(int));
	p1 = (int *) realloc(p, 15*sizeof(int));
	if(p1 != NULL){
		p = p1;
	}
	
	for(i = 0; i < 15; i++){
		printf("p[%d] = %d", i, p[i]);
		printf("\n");
	}
	
	free(p);
	free(p1);
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


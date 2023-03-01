/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:
	aula064 - Aloação Dinâmica - realloc()
	
	Função realloc(): serve para alocar memória durante a execução do programa.
	Ela faz o pedido de memória ao processador e retorna um ponteiro com o
	endereço do início o bloco de memória alocado.
	
	Protótipo:
	void* realloc(void* ptr, unsigned int num);
	
	Funcionamento:
	A função realloc() recebe por parâmetro
	- ponteiro para um bloco de memória já aloado;
	- a quantidade de bytes a ser alocada.
	e retorna;
	- NULL, no caso de erro;
	- ponteiro para a primeria posição do array;
	
	Exemplo:
	int *v = (int*) malloc(200); // cria array de 50 inteiros (200 bytes)
	v = (int*) realloc(v,400); // aumenta para 100 inteiros (400 bytes)
	
	Na alocação da memória, deve-se levar em conta o tamanho do tipo.
	Exemplo:
	int *v = (int*) malloc(200); // cria array de 50 inteiros (200 bytes)
	v = (int*) realloc(v,400); // aumenta para 100 inteiros (400 bytes)

	Solução: usar sizeof();
	int *v = (int*) malloc(50*sizeof(int); // cria array de 50 inteiros (200 bytes)
	v = (int*) realloc(v,100*sizeof(int)); // aumenta para 100 inteiros (400 bytes)
	
	Se o ponteiro para o bloco de memória previamente alocado for NULL, a função realloc()
	irá alocar memória da mesma forma como a função malloc()
	int *p;
	p = (int*) realloc(NULL, 50*sizeof(int));
	equivale a:
	p = (int*) malloc(ro*sizeof(int));
	
	Se o tamanho de memória solicitada for igual a ZERO realloc() irá
	liberar a memória da mesma forma como a função free().
	int *p = (int*) malloc(50*sizeof(int));
	p = (int*) realloc(p, 0);
	equivale a:
	free(p);
	
	CUIDADO: se não houver memória suficiente para alocar a memória requisitada,
	a função realloc() retornará NULL.
	int *p = (int*) malloc(5*sizeof(int));
	int *p1 = (int*) realloc(p, 15*sizeof(int));
	if(p1 != NULL){
		p = p1; // isso evita a perda de informação de p
	}
	
	A Função free(); sempre que alocamos memória é necessário liberá-la
	quando ela não or mais necessária.
	
	free(p);
	

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

// --- desenvolvimento das funções auxiliares --- //


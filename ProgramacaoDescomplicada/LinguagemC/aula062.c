/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:
	aula062 - Aloação Dinâmica - malloc()
	
	Função malloc(): serve para alocar memória durante a execução do programa.
	Ela faz o pedido de memória ao processador e retorna um ponteiro com o
	endereço do início o bloco de memória alocado.
	
	Protótipo:
	void* malloc(unsigned int num);
	
	Funcionamento:
	A função malloc() recebe por parâmetro
	- a quantidade de bytes a ser alocado e retorna;
	- NULL, no caso de erro;
	- ponteiro para a primeria posição do array;
	
	Exemplo:
	int *v = malloc(200); // cria array de 50 inteiros (200 bytes)
	char *c = malloc(200); // cria array de 200 char (200 bytes)
	
	Na alocação da memória, deve-se levar em conta o tamanho do tipo.
	Exemplo:
	int *v = (int*) malloc(200); // cria array de 50 inteiros (200 bytes)
	char *c = (char*) malloc(200); // cria array de 200 char (200 bytes)

	Solução: usar sizeof();
	int *v = (int*) malloc(50*sizeof(int)); // cria array de 50 inteiros (200 bytes)
	char *c = (char*) malloc(50*sizeof(char)); // cria array de 50 char (50 bytes)
	
	Se não houver espaço em memória sufuciente para alocação requisitada,
	a função malloc() retorna NULL.
	Isso deve ser checado no programa
	
	int *p, i;
	p = (int *) malloc(5*sizeof(int));
	if(p == NULL){
		printf("Erro! Sem memória\n");
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
	
	int *p, i;
	p = (int *) malloc(5*sizeof(int));
	if(p == NULL){
		printf("Erro! Sem memória\n");
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

// --- desenvolvimento das funções auxiliares --- //


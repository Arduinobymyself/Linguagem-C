/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:
	Programação Descomplicada
	aula 059 - Ponteiros para Ponteiros
	
	A linguagem C permite criar ponteiros com diferentes níveis de
	apontamentos: ponteiros que apontam para ponteiros
	Ponteiros de ponteiros
	
	
	
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
	
	int x = 10;
	int *p = &x;
	int **p1 = &p;
	
	printf("p1 = %d\n", p1);		// endereço em p1 = &p
	printf("*p1 = %d\n", *p1);	// conteúdo do endereço = &x
	printf("**p1 = %d\n", **p1);	// conteúdo do endereço do endereço = x
	printf("\n");
	
	/*
		é a quantidade de asteriscos (*) na declaração do ponteiro
		que indica o nível de profundidade do ponteiro
		
		int x;		// variável int
		int *p1;	// ponteiro de int (nívrel 1)
		int **p2;	// ponteiro para ponteiro de int (nível 2)
		int ***p3;	// ponteiro para ponteiro para ponteiro de int (nível 3)
	*/
	
	// acessando o conteúdo de um ponteiro para ponteiro
	char letra = 'a';
	char *ptrChar = &letra;
	char **ptrPtrChar = &ptrChar;
	char ***ptrPtrPtrChar = &ptrPtrChar;
	printf("*ptrChar = %c\n", *ptrChar);
	printf("**ptrPtrChar = %c\n", **ptrPtrChar);
	printf("***ptrPtrPtrChar = %c\n", ***ptrPtrPtrChar);
	printf("\n");
	
	
	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


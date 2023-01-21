/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	Programa��o Descomplicada
	aula 059 - Ponteiros para Ponteiros
	
	A linguagem C permite criar ponteiros com diferentes n�veis de
	apontamentos: ponteiros que apontam para ponteiros
	Ponteiros de ponteiros
	
	
	
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
	
	int x = 10;
	int *p = &x;
	int **p1 = &p;
	
	printf("p1 = %d\n", p1);		// endere�o em p1 = &p
	printf("*p1 = %d\n", *p1);	// conte�do do endere�o = &x
	printf("**p1 = %d\n", **p1);	// conte�do do endere�o do endere�o = x
	printf("\n");
	
	/*
		� a quantidade de asteriscos (*) na declara��o do ponteiro
		que indica o n�vel de profundidade do ponteiro
		
		int x;		// vari�vel int
		int *p1;	// ponteiro de int (n�vrel 1)
		int **p2;	// ponteiro para ponteiro de int (n�vel 2)
		int ***p3;	// ponteiro para ponteiro para ponteiro de int (n�vel 3)
	*/
	
	// acessando o conte�do de um ponteiro para ponteiro
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

// --- desenvolvimento das fun��es auxiliares --- //


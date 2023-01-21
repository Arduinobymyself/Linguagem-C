/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	Programa��o Descomplicada
	aula 057 - Ponteiros Parte 3
	Ponteiros Gen�ricos
	
	Ponteiro gen�rico, pode apontar para todos os tipos
	de dados existentes ou que ser�o criados
	
	Forma geral: void *nome_ponteiro;
	
	Exemplo: void *g;
	
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
	
	void *pp, *p;
	int *p1, p2=10;
	
	p1 = &p2;
	pp = &p2; // endere�o de um int
	printf("Endere�o de pp: %p\n", pp);
	pp = &p1; // endere�o de um int*
	printf("Endere�o de pp: %p\n", pp);
	pp = p1;  // endere�o de um int
	printf("Endere�o de pp: %p\n", pp);
	
	// antes de acessar o conte�do � preciso converter o ponteiro
	// gen�rico para o tipo de ponteiro com o qual se deseja trabalhar
	
	// printf("Conte�do: %d\n", *pp); // ERRADO!!!
	printf("Conte�do: %d\n", *(int*)pp); // CERTO!!!
	
	// as opera��es aritm�ticas s�o sempre realizadas com base
	// em uma unidade de mem�ria (1 byte)
	// *p = 0x5DC; // 1500 decimal
	printf("p = %d\n", p); // 1500 
	p++;
	printf("p = %d\n", p); // 1501
	p += 15;
	printf("p = %d\n", p); // 1516
	p -= 2;
	printf("p = %d\n", p); // 1514
	
	
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


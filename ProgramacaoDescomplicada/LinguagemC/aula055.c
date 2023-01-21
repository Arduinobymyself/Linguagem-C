/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	Programa��o Descomplicada
	aula 055 - Ponteiros Parte 1
	
	Vari�veis: armazenam dados dos tipos int, float, double, char, struct, ....
	Ponteiros: tipo especial de vari�vel que armazenam endere�os de mem�ria
	
	Forma geral de declara��o:
	Vari�veis: tipo_vari�vel nome_vari�vel;
		Ex: int x;
	
	Ponteiros: tipo_ponteiro *nome_ponteiro;
		Ex: int *x
	
	Ponteiros n�o inicializados apontam para um lugar (posi��o
	de mem�ria) indefinido
		Ex: int *p;
	
	Um ponteiro pode ter um valor especial NULL que �
	o endere�o de nenhum lugar (fora do range de mem�ria)
		Ex: int *p = NULL;
	
	Podemos inicializar um ponteiro, apontando para uma vari�vel
	que j� exista no programa.
	
		int x = 10;	// x recebe o valor 10
		int *p;		// ponteiro p declarado com operador * asterisco
		p = &x;		// p recebe o endere�o de mem�ria de x
		
	Para acessar o valor da vari�vel apontada por um ponteiro,
	usamos o operador asterisco *
	
		printf("*p = %d\n", *p);	
		// imprime o valor armazenado na posi��o de mem�ria armazenada em p
		
	O operador asterisco * permite modificar o conte�do da posi��o de 
	mem�ria apontada por ele.
	
		*p = 12;
	
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
	int *p;
	p = &x;
	
	printf("x = %d\n", x);
	printf("&x = %d\n", &x);
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);
	*p = 12;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);
	printf("x = %d\n", x);
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


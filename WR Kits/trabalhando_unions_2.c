/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	Unions - exemplos 1 


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //
union tipoU{
	short int x;
	unsigned char c[2];
};

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	union tipoU U;
	
	U.x = 1545;
	printf("\nx = %d", U.x);
	
	U.c[0] = 'a';
	U.c[1] = 'b';
	printf("\nc[0] = %c e c[1] = %c", U.c[0], U.c[1]);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


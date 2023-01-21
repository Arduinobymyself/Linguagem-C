/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	aula061 - Aloa��o Din�mica - sizeof()

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //
struct ponto2d{
	int x, y;
};

union ponto3d{
	int x, y, z;
};

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	printf("char: %d\n", sizeof(char));
	printf("int: %d\n", sizeof(int));
	printf("float: %d\n", sizeof(float));
	printf("double: %d\n", sizeof(double));
	printf("struct: %d\n", sizeof(struct ponto2d));
	printf("union: %d\n", sizeof(union ponto3d));



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


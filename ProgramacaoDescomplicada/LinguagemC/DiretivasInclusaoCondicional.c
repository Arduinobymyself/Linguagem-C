/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdarg.h>


// --- defini��o de par�metros --- //
#define TAMANHO 145

#ifdef TAMANHO
	#if TAMANHO > 100
		#undef TAMANHO
		#define TAMANHO 100
	#elif TAMANHO < 50
		#undef TAMANHO
		#define TAMANHO 50
	#else
		#undef TAMANHO
		#define TAMANHO 75
	#endif
#endif

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	printf("Valor de TAMANHO = %d\n", TAMANHO);


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


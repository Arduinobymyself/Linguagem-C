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
#include <locale.h>
#include <stdarg.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //
int soma_int(int n, ...){
	va_list lista;
	int i, s = 0;
	va_start(lista, n);
	for(i=1; i<=n; i++){
		s = s + va_arg(lista, int);
	}
	va_end(lista);
	return s;
}

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	int soma;
	
	soma = soma_int(2, 4, 5);
	printf("Somando 2 par�metros: %d\n", soma);

	soma = soma_int(3, 10, 5, 22);
	printf("Somando 3 par�metros: %d\n", soma);
	
	soma = soma_int(5, 7, 9, 3, 6, 1);
	printf("Somando 5 par�metros: %d\n", soma);




	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


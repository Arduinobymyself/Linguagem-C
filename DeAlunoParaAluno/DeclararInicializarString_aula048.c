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
#include <string.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //
void concatenarStrings(
					char string1[], 
					int str1, 
					char string2[], 
					int str2, 
					char string3[]);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	char palavra1[6] = {'B', 'r', 'a', 's', 'i', 'l'};
	char palavra2[] = {'B', 'r', 'a', 's', 'i', 'l'};
	char palavra3[7] = {"Brasil\0"};
	char palavra4[] = {"Brasil\0"};
	char palavra5[] = "Brasil";
	
	printf("%s", palavra5);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //




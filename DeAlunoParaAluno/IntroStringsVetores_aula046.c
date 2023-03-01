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
	

	char palavra1[] = {'B', 'r', 'a', 's', 'i', 'l'};
	char palavra2[] = {'C', 'a', 'f', 'e', ' '};
	char palavra3[] = {'L', 'e', 'i', 't', 'e'};
	char novaPalavra[10];
	int i;
	
	
	for(i=0; i<6; i++){
		printf("%c", palavra1[i]);
	}
	
	printf("\n");
	
	concatenarStrings(
				palavra2, 5, 
				palavra3, 5, 
				novaPalavra);
	
	for(i=0; i<10; i++){
		printf("%c", novaPalavra[i]);
	}


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //

void concatenarStrings(char string1[], int str1, char string2[], int str2, char string3[]){
	int i, j;
	for(i=0; i<str1; i++){
		string3[i] = string1[i];
		for(j=0; j<str2; j++){
			string3[str1+j] = string2[j];	
		}
	}
	
}


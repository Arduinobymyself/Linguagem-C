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

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	
	char str[50];
	FILE *f;
	f = fopen("arquivo.txt", "r")	;
	if(f == NULL){
		printf("Erro na abertura do arquivo!\n");
		system("pause");
		exit(1);
	}
	char *resultado = fgets(str, 13, f)	; // l� 12 caracteres
	if(resultado == NULL){
		printf("Erro na leitura do arquivo!\n");
	} else{
		printf("%s", str);
	}
	printf("\n");
	fclose(f);
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:
*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

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
	char *resultado = fgets(str, 13, f)	; // lê 12 caracteres
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

// --- desenvolvimento das funções auxiliares --- //


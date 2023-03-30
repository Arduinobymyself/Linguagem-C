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
#include <locale.h>
#include <string.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	//system("cls");
	printf("\n\n");


	char str[100] = "palavra1.palavra2,palavra3 palavra4!";
	char *sub;
	char texto[20];

	sub = strtok(str, " !.,");
	while(sub != NULL){
      printf("%s\n", sub);
      strcmp(texto, sub);
      sub = strtok(NULL, " !.,");
	}




	printf("\nFIM\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //



/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
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
	
	FILE *f;
	f = fopen("arquivo.txt", "w");
	if(f == NULL){
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char texto[50] = "Meu primeiro programa em linguagem C";
	int i;
	for(i=0; i<strlen(texto); i++){
		fputc(texto[i], f);
	}
	fclose(f);
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


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
	
	FILE *f1, *f2;
	f1 = fopen("minusculo.txt", "r");
	f2 = fopen("maiusculo.txt", "w");
	if(f1 == NULL || f2 == NULL){
		printf("Erro na abertura dos arquivos\n");
		system("pause");
		exit(1);
	}
	
	char c = fgetc(f1);
	while(c != EOF){
		fputc(toupper(c), f2);
		c = fgetc(f1);
	}
	fclose(f1);
	fclose(f2);
	printf("Processo finalizado!\n");
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


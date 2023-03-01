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
#include <math.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //
void salva(){
	int v[5] = {10, 20, 30, 40, 50};
	int i;
	FILE *fp = fopen("teste_feof.txt", "w");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!\n");
		system("pause");
		exit(1);
	}
	for(i=0; i<5; i++){
		fprintf(fp, "%d\n", v[i]);
	}
	fclose(fp);
}

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "ptb");
	system("cls");
	printf("\n\n");
	

	salva();


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


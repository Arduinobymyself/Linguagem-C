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
void carrega1();
void carrega2();

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "ptb");
	system("cls");
	printf("\n\n");
	

	carrega1(); // retorna 10 20 30 40 50 50 ou seja errado! devido ao mau uso do feof
	carrega2();

	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
void carrega1(){
	int i, n;
	FILE *fp = fopen("teste_feof.txt", "r");
	if(fp == NULL){
		printf("Erro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	while(!feof(fp)){
		fscanf(fp, "%d", &n);
		printf("%d\n", n);
	}
	printf("\n");
	fclose(fp);
}

void carrega2(){
	int i, n;
	FILE *fp = fopen("teste_feof.txt", "r");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!\n");
		system("pause");
		exit(1);
	}
	while(1){
		fscanf(fp, "%d", &n);
		if(feof(fp)){
			break;
		}
		printf("%d\n", n);
	}
	printf("\n");
	fclose(fp);
}

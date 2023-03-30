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
#include <math.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //
struct status{
	unsigned int ligado: 1;
	signed int valor: 4;
	unsigned int :3;
};

// --- prot�ritpo das fun��es auxiliares --- //
void check_status(struct status s){
	if(s.ligado == 1) printf("LIGADO!\n");
	if(s.ligado == 0) printf("DESLIGADO!\n");
}

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	int x;
	struct status ESTADO;
	printf("LIGADO(1) ou DESLIGADO(0)? ");
	scanf("%d", &x);
	
	
	ESTADO.ligado = x;
	check_status(ESTADO);


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula045 - Corpo das fun��es
	exemplo: Menu



*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
int menu();

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int op = menu();
	
	if(op == 4){
		printf("\nVoc� optou por sair.");
	} else {
		printf("\nVoc� escolheu a op��o %d.\n", op);
	}
		


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
int menu(){
	int i;
	
	do{
		printf("\nEscolha uma op��o:\n");
		printf("(1) Op��o 1\n");
		printf("(2) Op��o 2\n");
		printf("(3) Op��o 3\n");
		printf("(4) Sair\n");
		scanf("%d", &i);
		if(i == 4) break;
	}while((i < 1) | (i > 3));
	return i;
}

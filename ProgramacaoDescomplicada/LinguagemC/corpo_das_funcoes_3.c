/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula045 - Corpo das funções
	exemplo: Menu



*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
int menu();

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int op = menu();
	
	if(op == 4){
		printf("\nVocê optou por sair.");
	} else {
		printf("\nVocê escolheu a opção %d.\n", op);
	}
		


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
int menu(){
	int i;
	
	do{
		printf("\nEscolha uma opção:\n");
		printf("(1) Opção 1\n");
		printf("(2) Opção 2\n");
		printf("(3) Opção 3\n");
		printf("(4) Sair\n");
		scanf("%d", &i);
		if(i == 4) break;
	}while((i < 1) | (i > 3));
	return i;
}

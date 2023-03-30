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
void isalfa(char c);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	// SEU C�DIGO AQUI
	char nome[20];
	int i = 0;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);

	while(nome[i] != '\0'){
		isalfa(nome[i]);
		i++;
	}

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
void isalfa(char c){
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c < 'Z')){
		printf("%c � alfab�tico.\n", c);
	} else{
		printf("%c n�o � alfab�tico\n", c);
	}
}


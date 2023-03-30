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
void isalfa(char c);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	// SEU CÓDIGO AQUI
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

// --- desenvolvimento das funções auxiliares --- //
void isalfa(char c){
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c < 'Z')){
		printf("%c é alfabético.\n", c);
	} else{
		printf("%c não é alfabético\n", c);
	}
}


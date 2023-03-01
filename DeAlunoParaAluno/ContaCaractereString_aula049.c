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
int tamanhoString(char string[]);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	char stringUsuario[20];
	int num;
	printf("Digite uma palavra(string):  ");
	scanf("%s", stringUsuario);
	
	num = tamanhoString(stringUsuario);
	printf("O número de caracteres da string %s é igua a %d", stringUsuario, num);

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
int tamanhoString(char string[]){
	
	int numCaracteres = 0;
	while(string[numCaracteres] != '\0'){
		numCaracteres++; // incrementa o número de caracteres
	}
	numCaracteres++; // devido ao último caractere ser 0 caractere '\0'
	
	
	return numCaracteres;
	
}

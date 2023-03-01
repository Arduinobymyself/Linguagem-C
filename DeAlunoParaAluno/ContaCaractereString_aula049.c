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
	printf("O n�mero de caracteres da string %s � igua a %d", stringUsuario, num);

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
int tamanhoString(char string[]){
	
	int numCaracteres = 0;
	while(string[numCaracteres] != '\0'){
		numCaracteres++; // incrementa o n�mero de caracteres
	}
	numCaracteres++; // devido ao �ltimo caractere ser 0 caractere '\0'
	
	
	return numCaracteres;
	
}

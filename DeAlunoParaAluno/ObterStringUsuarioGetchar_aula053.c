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

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	// SEU CÓDIGO AQUI
	char linha[100];
	char caractere;
	int i = 0;
	
	do{
		caractere = getchar();
		linha[i] = caractere;
		i++;
	} while(caractere != '\n');
	linha[i-1] = '\0'; // escreve caracter nulo('\0') em cima do caractere enter('\n')
	
	printf("%s\n", linha);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //



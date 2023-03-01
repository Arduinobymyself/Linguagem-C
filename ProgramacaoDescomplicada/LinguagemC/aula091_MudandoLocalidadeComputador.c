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
#include <time.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	//setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	float f = 3.45;
	time_t tempo;
	struct tm *infotempo;
	char texto[80];
	time(&tempo);
	infotempo = localtime(&tempo);
	
	printf("Hello World!\n");
	printf("Valor de f = %f\n", f);
	strftime(texto, 80, "Data %A, %d/%b/%Y", infotempo);
	puts(texto);
	printf("\n\n");
	
	setlocale(LC_ALL, "ptb"); // muda localidade de todo o ambiente para português br
	
	printf("Hello World!\n");
	printf("Valor de f = %f\n", f);
	strftime(texto, 80, "Data %A, %d/%b/%Y", infotempo);
	puts(texto);
	printf("\n\n");


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


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
float converte_temp(float C);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");



	//SEU CÓDIGO AQUI
	float C, F;
	printf("digite a temperatura em graus Celsius: ");
	scanf("%f", &C);
	F = converte_temp(C);

    printf("%.1f Celsius equivale a %.1f Fahrenheit", C, F);


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
float converte_temp(float C){
    return C*(9.0/5.0)+32.0;
}

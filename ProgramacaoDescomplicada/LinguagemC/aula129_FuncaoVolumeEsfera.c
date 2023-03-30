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
float volume_esfera(float R);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");



	//SEU CÓDIGO AQUI
	float R;
	printf("Digite o rio da esfera: ");
    scanf("%f", &R);
    printf("Volume da esfera de raio %.2f = %.2f", R, volume_esfera(R));



	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
float volume_esfera(float R){
    float V;
    V = 4.0/3.0*3.1415926*pow(R,3);
    return V;
}


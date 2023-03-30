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
#include <locale.h>
#include <math.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //
float hipotenusa(float a, float b);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");



	//SEU CÓDIGO AQUI
	float a, b, h;
	printf("Entre com os valores dos catetos A e B: ");
	scanf("%f %f", &a, &b);
	h = hipotenusa(a, b);
	printf("Hipotenusa = %.2f\n", h);



	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
float hipotenusa(float a, float b){
    return sqrt(pow(a,2)+pow(b,2));
}

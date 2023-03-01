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
int fatorial(int N);
float cosseno(float x);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	float anguloRadianos, anguloGraus = 45.0; // graus
	float resultado;
	
	anguloRadianos = 3.1415927 * anguloGraus/180.0; // radianos
	resultado = cosseno(anguloRadianos);
	
	printf("Cosseno de %.1f é igual a %.3f\n", anguloGraus, resultado);
	printf("Cos     de %.1f é igual a %.3f\n", anguloGraus, cos(anguloRadianos)); // usando a biblioteca


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //

int fatorial(int N){
	int i, f = 1;
	for(i=1; i<=N; i++){
		f = f * i;
	}
	return f;
}

float cosseno(float x){
	int n;
	float c = 0.0;
	for(n=0; n<=5; n++){
		c = c + pow(-1, n)*pow(x, 2*n)/fatorial(2*n);
	}
	return c;
}



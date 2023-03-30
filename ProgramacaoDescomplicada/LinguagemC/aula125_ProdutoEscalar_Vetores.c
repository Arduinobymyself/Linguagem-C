
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

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");


	float x[5], y[5], prod = 0;
	int i;

	for(i=0; i<5; i++){
        printf("Digite o valor da posição X[%d]: ", i);
        scanf("%f", &x[i]);
	}

    for(i=0; i<5; i++){
        printf("Digite o valor da posição Y[%d]: ", i);
        scanf("%f", &y[i]);
	}

	for(i=0; i<5; i++){
        prod = prod + x[i] * y[i];
	}

	printf("O produto escalar = %.2f\n:", prod);

	printf("\n\n");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


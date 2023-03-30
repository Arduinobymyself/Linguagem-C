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

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");


	int vetor[10], i, x, qtde = 0;

	for(i=0; i<10; i++){
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);
	}

	printf("Digite x: ");
	scanf("%d", &x);

	for(i=0; i<10; i++){
        if(vetor[i] % x == 0){
            printf("%d\n", vetor[i]);
            qtde++;
        }
	}

	printf("Qtde = %d\n", qtde);


	printf("\n\n");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


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
float MediaDesvio(int *vetor, int n,float *m, float *dp);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	int v[5] = {1, 2, 3, 4, 5};
	float media, desvio;
	MediaDesvio(v, 5, &media, &desvio);
	printf("M = %f, D = %f\n", media, desvio);


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
float MediaDesvio(int *vetor, int n, float *m, float *dp){ 
// n = nº elementos, m = media, dp = desvio padrão
	
	int i;
	*m = 0.0;
	*dp = 0.0;
	
	for(i=0; i<n; i++){
		*m = *m+vetor[i];
	}
	*m = *m/n;
	
	for(i=0; i<n; i++){
		*dp = *dp+pow(vetor[i] - *m, 2);
	}
	*dp = sqrt(*dp/(n-1));
}

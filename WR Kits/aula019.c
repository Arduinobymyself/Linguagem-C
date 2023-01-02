#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 019 - iniciliazação de vetores
	
	int vetor[tamN] = {n1, n2, n3, ... , nN};
*/

#define dim	5

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor1[dim] = {1, 2, 3, 4, 5};
	int vetor2[] = {11, 22, 33, 44, 55, 66, 77, -1};
	int vetor3[] = {100, 200, 300, 400, 500, 600};
	
	unsigned int i, tamanho;
	
	printf("\nVetor com tamnho pré-definido\n");
	for(i = 0; i < dim; i++){
		printf("Elemento %d = %d\n", i, vetor1[i]);
	}

	printf("\nVetor terminado em -1\n");
	for(i = 0; vetor2[i] > 0; i++){
		printf("Elemento %d = %d\n", i, vetor2[i]);
	}	
	
	printf("\nVetor com tamnho desconhecido\n");
	tamanho = sizeof(vetor3) / sizeof(int);
	for(i = 0; i < tamanho; i++){
		printf("Elemento %d = %d\n", i, vetor3[i]);
	}
	
	
	printf("\n\n");
	//system("pause");
	return 0;
}

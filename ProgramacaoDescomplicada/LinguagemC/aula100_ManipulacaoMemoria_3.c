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
struct pessoa{
	char nome[50];
	int idade;
};

// --- protóritpo das funções auxiliares --- //
void imprime(int *v, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d, ", v[i]);
	}
	printf("\n");
}

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	int x[5] = {-1, -1, -1, -1, -1};
	int v[5] = {1, 2, 3, 4, 5};
	
	imprime(x, 5); // 1, 2, 3, 4, 5
	memcpy(x, v, 4); // copia 4 bytes (1 int) do vetor v em x
	imprime(x, 5); // 1, -1, -1, -1, -1,
	memcpy(x, v, 20); // copia 20 bytes (5 ints) do vetor v em x
	imprime(x, 5); // 1, 2, 3, 4, 5

	printf("\n\n");
	
	struct pessoa p1 = {"Marcelo", 34};
	struct pessoa p2;
	
	memcpy(&p2, &p1, sizeof(struct pessoa));
	printf("%s: %d\n", p2.nome, p2.idade);
	


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


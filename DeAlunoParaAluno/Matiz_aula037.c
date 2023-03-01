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

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //
void imprimeMatriz(int mat[][3]);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	int matriz[3][3] = {{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}};
						
	imprimeMatriz(matriz);


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
void imprimeMatriz(int mat[][3]){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}	
}


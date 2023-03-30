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
	system("cls");
	printf("\n\n");


	int mat[4][4], i, j, maior;
	int linha = 0, coluna = 0;

	for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digita a posição [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
	}

	maior = mat[0][0];

	for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                linha = i;
                coluna = j;
            }
        }
	}

	printf("Maior: %d\n", maior);
	printf("Posição [%d][%d]\n", linha, coluna);



	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


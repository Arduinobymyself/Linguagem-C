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


	int mat[3][3], transp[3][3], i, j;

	for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite o valor da posição [%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
	}

	printf("\nMatriz digitada:\n");
	for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            transp[j][i] = mat[i][j];
            printf("%d ", mat[i][j]);
        }
        printf("\n");
	}

	printf("\nMatriz Transposta:\n");
	for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", transp[i][j]);
        }
        printf("\n");
	}




	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


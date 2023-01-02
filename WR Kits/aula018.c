#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 018 - Matrizes
	linhas e colunas
	tipo nome[dim1][dim2]...[dimN]
	
*/

#define DIML	3
#define DIMC	3

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i, j;
	int matriz[DIML][DIMC];
	
	for(i = 0; i < DIML; i++){
		for(j = 0; j < DIMC; j++){
			printf("\nElemento %d,%d : ", i, j);
			scanf("%d", &matriz[i][j]);
			getchar();
		}
	}
	
	for(i = 0; i < DIML; i++){
		for(j = 0; j < DIMC; j++){
			printf("%4d ", matriz[i][j]);
		}
		printf("\n");
	}



	printf("\n\n");
	//system("pause");
	return 0;
}

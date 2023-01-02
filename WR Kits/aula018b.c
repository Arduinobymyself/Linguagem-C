#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 018 - Matrizes
	linhas e colunas
	tipo nome[dim1][dim2]...[dimN]
	
*/

#define DIML	5
#define DIMC	20

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i, j;
	int nomes[DIML][DIMC];
	
	for(i = 0; i < DIML; i++){
			printf("\nEntre com o nome %d : ", i+1);
			scanf("%[^\n]s", &nomes[i]);
			//fgets(&nomes[i], DIMC-1, stdin);
			getchar();
	}
	
	for(i = 0; i < DIML; i++){
			printf("\nO nome %d é %s\n", i+1, nomes[i]);
			
	}



	printf("\n\n");
	//system("pause");
	return 0;
}

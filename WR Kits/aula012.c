#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aplica��es n�o convencionais do la�o For
	
	utilizar mais de uma vari�vel no la�o For
	
	imprimir os n�meros pares de 0 a 100
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i, j;
	
	for(i = 0, j = 0; i + j <= 100; i++, j++){
		printf("%d ", i+j);
	}


	printf("\n\n");
	//system("pause");
	return 0;
}

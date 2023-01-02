#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aplicações não convencionais do laço For
	
	utilizar mais de uma variável no laço For
	
	imprimir os números pares de 0 a 100
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

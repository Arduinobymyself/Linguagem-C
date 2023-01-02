#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define pwd 12
/*
	jogo acerte o valor
*/

int main(){
	setlocale(LC_ALL, "Portuguese");


	int i;
	
	for(i = 0; i != pwd; ){
		printf("\nDigite o número correto: ");
		scanf("%d", &i);
	}
	printf("\nAcertou!!!\n");


	printf("\n\n");
	//system("pause");
	return 0;
}

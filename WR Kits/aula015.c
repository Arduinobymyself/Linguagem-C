#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 015 - declara��o Continue
	
	// continue - para pular blocos de c�digos
	
	// exemplo: imprimir os n�meros pares de 0 a 100
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int x;
	
	for(x = 0; x <= 100; x++){
		if(x % 2){
			continue;
		}
		printf("%d ", x);
	}


	printf("\n\n");
	//system("pause");
	return 0;
}

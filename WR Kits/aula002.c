#include <stdio.h>
#include <stdlib.h>

/*
	aula 002 - scanf()
*/

int main(){
	
	int numero;
	
	printf("\nDigite um numero: ");
	scanf("%d", &numero);
	getchar(); // limpa o buffer do teclado para evitar lixo
	
	printf("\nVoce digitou o numero %d.\n", numero);
	
	system("pause");
	return 0;
}

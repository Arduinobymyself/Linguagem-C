#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula-2.2 - Inserindo dados pelo teclado (stdin) - scanf() - entrada de dados
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade = 21;
	float peso;
	
	printf("Valor inicial da idade: %d.\n", idade);
	printf("\nDigite uma idade: ");
	scanf("%d", &idade);
	printf("\nDigite um peso: ");
	scanf("%f", &peso);
	
	printf("\nIdade informada: %d.\n", idade);
	printf("\nPeso informado: %.2f.\n", peso);


	printf("\n\n");
	//system("pause");
	return 0;
}

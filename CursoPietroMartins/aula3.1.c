#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula-3.1 - Entendendo variáveis e atribuição de dados - operador = em C
*/

#define texto "Entrada e saída de dados."

int main(){
	setlocale(LC_ALL, "Portuguese");

	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("\nDigite a idade: ");
	scanf("%d", &idade);
	
	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	
	printf("\nDigite o nome: ");
	scanf("%s", nome);

	printf("\nDados informados:\n");
	printf("idade:\t%d.\n", idade);
	printf("altura:\t%.2f.\n", altura);
	printf("idade:\t%s.\n", nome);
	

	printf("\n\n");
	//system("pause");
	return 0;
}

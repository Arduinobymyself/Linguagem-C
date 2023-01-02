#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula-2.1 - mostrando mensagens em C - printf() sáida de dados
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	printf("Oi tudo bem? Tenho 6 anos e programo.\n");
	printf("Valor inteiro: %d.\n", 10);
	printf("Valor real: %f.\n", 3.14159265);
	printf("Valor real com apenas duas casas decimais: %.2f.\n", 3.14159265);
	printf("Dado de texto: %c.\n", 'A');
	printf("Dado de texto: %s.\n", "testando 1 2 3!");


	printf("\n\n");
	//system("pause");
	return 0;
}

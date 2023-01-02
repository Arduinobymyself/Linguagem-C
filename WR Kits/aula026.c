#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula026 - cadeia de ponteiros
	ponteiro2 --> &ponteiro1		ponteiro1 --> &variavel		variavel = valor;
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int var;
	int *p1;
	int **p2;
	
	var = 15;
	p1 = &var; // p1 aponta para o endereço de var
	p2 = &p1; // p2 aponta para o endereço de p1
	
	printf("\n%d\n", **p2); // mostra o conteúdo da variável var
	
	printf("p2 --->%d p1 --->%d var --->%d ", p2, p1, var);
	






	printf("\n\n");
	//system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 020 - Ponteiros
	
	int variavel;
	&vari�vel // endere�o em mem�ria da vari�vel
	*variavel // valor armazenado no ende�o de mem�ria da vari�vel
	
	tipo *nome;
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int numero1 = 10;
	int exibe;
	int *p1;

	p1 = &numero1;
	exibe = *p1;
	
	printf("\n%d", p1);
	printf("\n%d", *p1);
	




	printf("\n\n");
	//system("pause");
	return 0;
}

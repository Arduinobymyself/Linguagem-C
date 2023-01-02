#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 020 - Ponteiros
	
	int variavel;
	&variável // endereço em memória da variável
	*variavel // valor armazenado no endeço de memória da variável
	
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

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula027 - inicializa��o de ponteiros
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	char *p;
	printf(p); // erro sem�ntico, pois estamos tentando imprimir o valor de um ponteiro n�o inicializado

	char *q = "teste de frase";
	printf(q);



	printf("\n\n");
	//system("pause");
	return 0;
}

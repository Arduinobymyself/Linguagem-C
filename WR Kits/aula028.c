#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula028 - ponteiros - encontrando problemas
	não executar esse programa!!!
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int var1, var2, *p1, *p2;
	
	var1 = 46;	// var recebe o valor 46
	*p1= var1; 	// estamos atribuindo o valor da variável ao ponteiro!!!!! deveriamos atribuir o endereço de memória
	
	var2 = 88;
	p2 = var2;
	printf("\n%d\n", *p2);	// estamos tentando imprimmir o valor da var2
	// o correto seria:
	p2 = &var2;
	printf("\n%d\n", *p2);


	printf("\n\n");
	//system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 021 - Expressões Aritméticas com Ponteiros 
	
	operadores de ponteiros * &
	
	ponteiros permitem duas operações + -
	
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int teste;
	int *p1, *p2;
	char *p3;
	float *p4;
	
	teste = 500;
	p1 = &teste;
	p2 = p1;
	
	printf("\nNo local %p ", p2); // enderço em memória da variável teste
	printf(" encontra-se o valor %d \n", *p2); // valor da variável teste
	
	printf("\n %d \n", p1); // endereço do ponteiro p1
	p1++; // incrementa em 1
	printf("\n %d \n", p1); // endreço do ponteiro p1 deslocado de 4 bytes (1 inteiro)

	printf("\n %d \n", p3); // endereço do ponteiro p1
	p3++; // incrementa em 1
	printf("\n %d \n", p3); // endreço do ponteiro p1 deslocado de 1 bytes (1 charactere)

	printf("\n %d \n", p4); // endereço do ponteiro p1
	p4++; // incrementa em 1
	printf("\n %d \n", p4); // endreço do ponteiro p1 deslocado de 4 bytes (1 inteiro)


	printf("\n\n");
	//system("pause");
	return 0;
}

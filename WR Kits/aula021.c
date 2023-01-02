#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 021 - Express�es Aritm�ticas com Ponteiros 
	
	operadores de ponteiros * &
	
	ponteiros permitem duas opera��es + -
	
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
	
	printf("\nNo local %p ", p2); // ender�o em mem�ria da vari�vel teste
	printf(" encontra-se o valor %d \n", *p2); // valor da vari�vel teste
	
	printf("\n %d \n", p1); // endere�o do ponteiro p1
	p1++; // incrementa em 1
	printf("\n %d \n", p1); // endre�o do ponteiro p1 deslocado de 4 bytes (1 inteiro)

	printf("\n %d \n", p3); // endere�o do ponteiro p1
	p3++; // incrementa em 1
	printf("\n %d \n", p3); // endre�o do ponteiro p1 deslocado de 1 bytes (1 charactere)

	printf("\n %d \n", p4); // endere�o do ponteiro p1
	p4++; // incrementa em 1
	printf("\n %d \n", p4); // endre�o do ponteiro p1 deslocado de 4 bytes (1 inteiro)


	printf("\n\n");
	//system("pause");
	return 0;
}

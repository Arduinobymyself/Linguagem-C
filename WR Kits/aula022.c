#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 022 - Ponteiros e Matrizes
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	char vetor[80] = "Teste de String", *p;

	p = vetor; // recebe o endere�o do primeiro elemento do vetor/matriz
	// � o mesmo que: p = &vetor[0];
	
	p = p+9; // soma 9 bytes � posi��o de mem�ria inicial do vetor/matriz
	// ou seja pega o 10� elemento (index 9) no vetor/matriz (S)
	// � o emsmo que p = &vetor[9]
	
	printf("\n%c\n", *p);


	printf("\n\n");
	//system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula-3.2 - realizando cálculos em C
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, soma, sub, mult, div;
	
	printf("\nDigite o primeiro valor: ");
	scanf("%d", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &B);
	
	soma = A+B;
	sub = A-B;
	mult = A*B;
	div = A/B; // divisão inteira, não mostra parte fracionária
	
	printf("\nResultados:\n");
	printf("\nSoma = %d", soma);
	printf("\nSubtração = %d", sub);
	printf("\nMultiplicação = %d", mult);
	printf("\nDivisão = %d", div);
	

	



	printf("\n\n");
	//system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula-3.2 - realizando c�lculos em C
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
	div = A/B; // divis�o inteira, n�o mostra parte fracion�ria
	
	printf("\nResultados:\n");
	printf("\nSoma = %d", soma);
	printf("\nSubtra��o = %d", sub);
	printf("\nMultiplica��o = %d", mult);
	printf("\nDivis�o = %d", div);
	

	



	printf("\n\n");
	//system("pause");
	return 0;
}

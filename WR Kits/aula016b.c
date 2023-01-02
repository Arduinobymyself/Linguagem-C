#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 016 - Dois vetores, imprimir o produto escalar de ambos
	exemplo:
	vetor 1 = 2, 3
	vetor 2 = 4, 8
	produto escalar = 2x4 + 3x8 = 32
*/

#define tam 2

int main(){
	setlocale(LC_ALL, "Portuguese");


	int vetor1[tam];
	int vetor2[tam];
	unsigned int i, produto = 0;
	
	printf("\nEntre com o valor do vetor 1\n");
	for(i = 0; i < tam; i++){
		printf("\nElemento %d ", i);
		scanf("%d", &vetor1[i]);
		getchar();
	}
	
	printf("\nEntre com o valor do vetor 2\n");
	for(i = 0; i < tam; i++){
		printf("\nElemento %d ", i);
		scanf("%d", &vetor2[i]);
		getchar();
	}
	
	for(i = 0; i < tam; i++){
		produto += vetor1[i] * vetor2[i];
	}
	
	printf("\nO produto escalar é igual a %d ", produto);

	

	
	


	printf("\n\n");
	//system("pause");
	return 0;
}

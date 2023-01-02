#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 016 - Vetores e o método Bolha
	
	tipo nome[tamanho];
	
	int vetor[5]; // vetor para 5 elementos do tipo inteiro
	char vetor[10] // vetor para 10 elementos do tipo caractere
*/

#define tam 5

int main(){
	setlocale(LC_ALL, "Portuguese");

	int vetor[tam];
	unsigned int i, numero;
	
	printf("\nEntre com o número inicial do vetor: ");
	scanf("%d", &numero);
	getchar();
	
	// preenche o vetor
	for(i = 0; i < tam; i++){
		vetor[i] = numero++;
	}
	
	// imprime o vetor
	for(i = 0; i < tam; i++){
		printf("\nElemento %d = %d", i, vetor[i]);
	}
	
	


	printf("\n\n");
	//system("pause");
	return 0;
}

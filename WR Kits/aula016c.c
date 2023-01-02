#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 016 - Criar um vetor e organizar os dados
	os dados devem ser exibidos em forma crescente
*/

#define tam			5
#define falso		0
#define verdadeiro 	1

int main(){
	setlocale(LC_ALL, "Portuguese");

	int vetor[tam], i, change = falso, final = tam, store;
	
	printf("\nEntre com um vetor de %d elementos\n", tam);
	
	for(i = 0; i < tam; i++){
		
		printf("Elemento %d ", i);
		scanf("%d", &vetor[i]);
		getchar();
		
	}
	
	do{
		
		change = falso;
		
		for(i = 0; i < final; i++){
			
			if(vetor[i] > vetor[i + 1]){
				store = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = store;
				change = verdadeiro;
			}
			
		}
		
	} while(change);
	
	for(i = 0; i < tam; i++){
		printf("%d\n", vetor[i]);
	}


	printf("\n\n");
	//system("pause");
	return 0;
}

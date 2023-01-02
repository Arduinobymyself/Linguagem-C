#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	// invertendo uma string
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	char palavra1[20] = "Linguagem C";
	char palavra2[20];
	char c;
	int i, j = 0, tam = strlen(palavra1);
	
	// modo 1 - só imprimindo.
	printf("\nPalavra original: %s\n", palavra1);
	printf("Palavra invertida: ");
	for(i = strlen(palavra1) - 1; i >= 0; i--){
		printf("%c", palavra1[i]);
	}
	printf("\n\n");
	
	// modo 2 - armazenando a palavra em um vetor auxiliar.
	printf("\nPalavra original: %s\n", palavra1);
	for(i = strlen(palavra1) - 1; i >= 0; i--){
		palavra2[j] = palavra1[i];
		j++;
	}
	palavra2[j] = '\0';
	printf("Palavra invertida: %s\n\n", palavra2);
	
	//modo 3 - sem usar vetor auxiliar
	printf("\nPalavra original: %s\n", palavra1);
	for(i = 0; i < tam / 2; i++){
		c = palavra1[i];
		palavra1[i] = palavra1[tam - 1 - i];
		palavra1[tam - 1 - i] = c;
	}
	printf("Palavra invertida: %s\n\n", palavra1);
	
	
	
	





	printf("\n\n");
	//system("pause");
	return 0;
}

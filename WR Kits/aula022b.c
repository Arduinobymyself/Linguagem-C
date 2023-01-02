#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*
	aula 022 - Ponteiros e Matrizes
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	char matriz[50];
	int i;
	
	printf("\n=== CONVERTE: MAIÚSCULAS -> MINÚSCULAS ===\n");
	printf("\nEntre com uma frase em letra maiúscula: ");
	scanf("%[^\n]s", &matriz);
	getchar();
	
	printf("\nFrase convertida em letras minúsculas: ");
	for(i = 0; matriz[i]; i++){
		printf("%c", tolower(matriz[i]));
	}
	


	printf("\n\n");
	//system("pause");
	return 0;
}

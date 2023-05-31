#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	TESTES COM STRING
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	char palavra[20] = "Teste de String";
	char nome[20] = "João";
	
	printf("\n%c", palavra[0]);// imprimindo um caractere individual
	
	nome[0] = 'T'; // substituindo um caractere individual
	printf("\n%s", nome);
	
	palavra[10] = '\0'; // inserindo o caractere '\0' no meio da string
	printf("\n%s", palavra); // será impresso somente até encontrar o carctere '\0' -> "Teste de S"
	
	// copindo arrays
	char str1[20] = "Hello World";
	char str2[20];
	
	// str1 = str2 // erro gravíssimo
	
	int i;
	for(i = 0; str1[i] != '\0'; i++){
		str2[i] = str1[i] ;
	}
	str2[i] = '\0';
	printf("\nOriginal: %s,... copiado: %s.", str1, str2);
	
	// usnado a biblioteca <string.h>
	int tamanho = strlen(palavra);// tamanho
	printf("\n%d", tamanho); // 10
	
	char nova_palavra[20];
	strcpy(nova_palavra, palavra);// copiando
	printf("\n%s", nova_palavra); // "Teste de S"
	
	char palavra2[20] = "tring";
	strcat(palavra, palavra2);// concatenando
	printf("\n%s", palavra); // "Teste de String"
	
	if(	strcmp(str1, str2) == 0){// comparando
		printf("\nA String \"%s\" é exatamente igual a String \"%s\".", str1, str2);
	} else{
		printf("\nA String \"%s\" não é igual a String \"%s\".", str1, str2);
	}

	
	
	
	
	
	
	
	
	
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

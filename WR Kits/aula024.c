#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula024 - ponteiros e strings
*/

#define tam	50

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char *p;
	
	p = "Hello world!"; // p aponta para o endere�o de mem�ria do primeiro caractere da string
	
	printf("\n");
	printf(p); // imprime o conte�do/valor a partir da posi��o apontada
	printf("\n");
	
	
	// 2� parte
	// encontrando uma sub-string
	// encontrar o primeiro espa�o ou o fim de uma string
	
	char str[tam];
	int i;
	
	printf("\nEntre com uma string: ");
	gets(str);
	
	
	for(i = 0; str[i] && str[i] != ' '; i++); // se achar um espa�o, para na posi��o
	p = &str[i]; // p recebe o endre�o da posi��o encontrada

	printf("\n");
	printf(p); // imprime o valor ap�s a posi��o encontrada
	// exemplo: marcelo pinto de moraes -> pinto de moraes
	printf("\n");	

	
	


	printf("\n\n");
	//system("pause");
	return 0;
}

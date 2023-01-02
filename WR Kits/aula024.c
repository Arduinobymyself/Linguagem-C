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
	
	p = "Hello world!"; // p aponta para o endereço de memória do primeiro caractere da string
	
	printf("\n");
	printf(p); // imprime o conteúdo/valor a partir da posição apontada
	printf("\n");
	
	
	// 2ª parte
	// encontrando uma sub-string
	// encontrar o primeiro espaço ou o fim de uma string
	
	char str[tam];
	int i;
	
	printf("\nEntre com uma string: ");
	gets(str);
	
	
	for(i = 0; str[i] && str[i] != ' '; i++); // se achar um espaço, para na posição
	p = &str[i]; // p recebe o endreço da posição encontrada

	printf("\n");
	printf(p); // imprime o valor após a posição encontrada
	// exemplo: marcelo pinto de moraes -> pinto de moraes
	printf("\n");	

	
	


	printf("\n\n");
	//system("pause");
	return 0;
}

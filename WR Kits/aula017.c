#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	aula 017 - Strings (Cadeia de Caracteres)
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[51], sobrenome[51];
	int comp;
	
	printf("\nDigite seu nome: ");
	scanf("%[^\n]s", &nome);
	getchar();
	
	printf("\nDigite seu sobrenome: ");
	scanf("%[^\n]s", &sobrenome);
	getchar();
	
	
	strcat(nome, " ");
	strcat(nome, sobrenome);
	
	printf("\nOlá %s, seja bem vindo!", nome);
	
	comp = strlen(nome);
	printf("\nSeu nome completo tem %d letras.", comp);
	
	printf("\n%s",strlwr(nome));
	
	strcpy(nome, "Seu nome foi modificado!");
	printf("\n%s", nome);


	printf("\n\n");
	//system("pause");
	return 0;
}

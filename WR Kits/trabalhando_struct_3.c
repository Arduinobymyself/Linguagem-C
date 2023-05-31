#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	trabalhando com structs parte 3
	Array de structs
*/

struct pessoa{
	char nome[50], rua[50];
	int numero, idade;
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	struct pessoa p[4];
	int i;
	
	// entrada de dados
	for(i = 0; i < 4; i++){
		printf("\nDigite o nome: ");
		gets(p[i].nome);
		fflush(stdin);
		printf("\nDigite a rua: ");
		gets(p[i].rua);
		fflush(stdin);
		printf("\nDigite o número: ");
		scanf("%d", &p[i].numero);
		fflush(stdin);
		printf("\nDigite a idade: ");
		scanf("%d", &p[i].idade);
		fflush(stdin);
		system("cls");
	}
	
	// saída de dados
	for(i = 0; i < 4; i++){
		printf("\n%s mora na rua %s número %d e tem %d", p[i].nome, p[i].rua, p[i].numero, p[i].idade);
	}
	
	




	printf("\n\n");
	//system("pause");
	return 0;
}

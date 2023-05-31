#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	trabalhando com structs parte 2
*/

struct pessoa{
	char nome[50], rua[50];
	int numero, idade;
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	struct pessoa p1 = {"Marcelo", "Av Armando", 51, 1893};
	struct pessoa p2;
	
	strcpy(p2.nome, p1.nome);
	strcpy(p2.rua, p1.rua);
	p2.idade = p1.idade;
	p2.numero = p1.numero;




	printf("\n\n");
	//system("pause");
	return 0;
}

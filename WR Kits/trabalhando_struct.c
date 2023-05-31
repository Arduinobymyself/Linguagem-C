#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	Trabalhando com structs
	struct nome_struct{
		tipo variável;
		tipo variável;
		tipo variável;
		.
		.
		.
		tipo variável;
	};
	
	struct nome_struct variável;
*/

struct pessoa{
	char nome[50], rua[50];
	int numero, idade;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	// inicializando uma struct
	struct pessoa p1;
	struct pessoa p2;
	struct pessoa p3;
	
	
	// recebimento via stdin
	printf("\nEntre com o nome: ");
	gets(p1.nome);
	printf("\nEntre com a rua: ");
	gets(p1.rua);
	printf("\nEntre com o número: ");
	scanf("%d", &p1.numero);
	printf("\nEntre com a idade: ");
	scanf("%d", &p1.idade);
	
	
	//p2.nome = "Marcelo";	// não é possível inicializar dessa forma
	//p2.rua = "Armando";	

	
	// essa é a forma correta de inicializar
	strcpy(p3.nome, "Moraes");
	strcpy(p3.rua, "Pannunzio");
	p3.idade = 51;
	p3.numero = 1893;
	
	
	
	printf("\n%s tem %d e mora na rua %s numero %d", p1.nome, p1.idade, p1.rua, p1.numero);
	printf("\n%s tem %d e mora na rua %s numero %d", p3.nome, p3.idade, p3.rua, p3.numero);
	
	struct pessoa p4 = {"Marcelo Moraes", "Av. Dr Armando", 1893, 51};
	printf("\n%s tem %d e mora na rua %s numero %d", p4.nome, p4.idade, p4.rua, p4.numero);
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

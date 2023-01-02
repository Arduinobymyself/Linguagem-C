#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	trabalhando com structs parte 4
	aninhamento de structs
	
	como uma estrutura tamb�m � um tipo de vari�vel,
	podemos declarar uma vari�vel do tipo estrutura dentro de uma estrutura
	
	formageral:
	
	struct nome_estrutura_1{
		....
	};
	struct nome_estrutura_2{
		....
		struct nome_estrutura_1 nome;
		....
	}
	
*/


struct endereco{
	char rua[50];
	int numero;
};

struct pessoa{
	char nome[50];
	int idade;
	struct endereco end;
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	struct pessoa p;
	p.idade = 51;
	p.end.numero = 1893;
	
	printf("\nIdade = %d", p.idade);
	printf("\nN�mero = %d", p.end.numero);
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

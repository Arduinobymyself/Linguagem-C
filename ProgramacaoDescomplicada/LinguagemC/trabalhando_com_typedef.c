/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	TYPEDEF - permite ao programador definir um "apelido" para um tipo existente.
	
	typedef tipo_existente novo_nome;
	
	exemplo:
	
	typedef int inteiro;
	
	o comando tupedef deve ser usado com cautela, pois ele pode acabar produzindo
	declarações confusas não remetendo realmente ao tipo que foi renomeado
	Exemplo
	
	typedef unsigned int positivos[5]
	.
	.
	.
	positivos v; 
	
	no caso acima, positivos, não define implicitamente 
	que v é um vetor para 5 inteiros não sinalizados!!!


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //
struct cadastro{
	char nome[50];
	char rua[50];
	int numero;
	int idade;
};

typedef struct cadastro cad;

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	struct cadastro c1; // modo tradicional de definição de uma var tipo struct cadastro
	cad c2; // usando o alias cad para definir uma var tipo struct cadastro
	
	strcpy(c1.nome, "Marcelo");
	strcpy(c2.nome, "Flora");
	printf("%s e %s", c1.nome, c2.nome);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


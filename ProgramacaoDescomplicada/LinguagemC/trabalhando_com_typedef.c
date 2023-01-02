/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	TYPEDEF - permite ao programador definir um "apelido" para um tipo existente.
	
	typedef tipo_existente novo_nome;
	
	exemplo:
	
	typedef int inteiro;
	
	o comando tupedef deve ser usado com cautela, pois ele pode acabar produzindo
	declara��es confusas n�o remetendo realmente ao tipo que foi renomeado
	Exemplo
	
	typedef unsigned int positivos[5]
	.
	.
	.
	positivos v; 
	
	no caso acima, positivos, n�o define implicitamente 
	que v � um vetor para 5 inteiros n�o sinalizados!!!


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //
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

	struct cadastro c1; // modo tradicional de defini��o de uma var tipo struct cadastro
	cad c2; // usando o alias cad para definir uma var tipo struct cadastro
	
	strcpy(c1.nome, "Marcelo");
	strcpy(c2.nome, "Flora");
	printf("%s e %s", c1.nome, c2.nome);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


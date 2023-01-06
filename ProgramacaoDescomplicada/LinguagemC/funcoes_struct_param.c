/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Janeiro 2023
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula050 - Funções - Struct como Parâmetro
	
	Quando trabalhamos com estruturas podemos passar para a função:
		- um campo;
		- toda a estutura;
			- por valor
			- por referência
			
	Exemplo campo - passagem por valor:
	struct ponto{
		int x;
		int y;
	};
	
	void imprime_valor(int n){
		printf("\nValor = %d\n", n);
	}
	
	int main(){
		struct ponto p1 = {10, 20};
		imprime_valor(p1.x);
		imprime_valor(p1.y);
		
		return 0;
	}
	
	Exemplo campo - passagem por referência:
	struct ponto{
		int x;
		int y;
	};
	
	void soma_imprime_valor(int *n){
		*n = *n + 1;
		printf("\nValor - %d\n", *n);
	}
	
	int main(){
		strunct ponto p1 = {10, 20};
		soma_imprime_valor(&p1.x);
		soma_imprime_valor(&p1.y);
		return 0;
	}
	
	
	
*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //
struct ponto{
	int x;
	int y;
};

// --- protóritpo das funções auxiliares --- //
void imprime_valor(int n);
void soma_imprime_valor(int *n);

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	struct ponto p1 = {10, 20};
	
	// campo - passagem por valor
	imprime_valor(p1.x);
	imprime_valor(p1.y);
	
	// campo - passagem por referência
	soma_imprime_valor(&p1.x);
	soma_imprime_valor(&p1.y);
	
	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
void imprime_valor(int n){
	printf("\nValor = %d\n", n);
}

void soma_imprime_valor(int *n){
	*n = *n + 1;
	printf("\nValor - %d\n", *n);
}

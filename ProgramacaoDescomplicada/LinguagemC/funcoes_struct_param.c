/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Janeiro 2023
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula050 - Fun��es - Struct como Par�metro
	
	Quando trabalhamos com estruturas podemos passar para a fun��o:
		- um campo;
		- toda a estutura;
			- por valor
			- por refer�ncia
			
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
	
	Exemplo campo - passagem por refer�ncia:
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

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //
struct ponto{
	int x;
	int y;
};

// --- prot�ritpo das fun��es auxiliares --- //
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
	
	// campo - passagem por refer�ncia
	soma_imprime_valor(&p1.x);
	soma_imprime_valor(&p1.y);
	
	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
void imprime_valor(int n){
	printf("\nValor = %d\n", n);
}

void soma_imprime_valor(int *n){
	*n = *n + 1;
	printf("\nValor - %d\n", *n);
}

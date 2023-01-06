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
			
	Podemos ainda usar o oprerador SETA "->" para
	acessar um campo de uma estrutura
	passada por refer�ncia.
	
	struct ponto{
		int x;
		int y;
	};
	
	void atribui(struct ponto *p){
		p -> x = 10;
		p -> y = 20;
	}
	
	int main(){
		struct ponto p1;
		atribui(&p1);
		printf("x = %d\n", p1.x);
		printf("y = %d\n", p1.y);
	
	}
		
*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- vari�veis globais --- //
struct ponto{
	int x;
	int y;
};

// --- prot�ritpo das fun��es auxiliares --- //
void atribui(struct ponto *p);

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	struct ponto p1;
	atribui(&p1);
	printf("x = %d\n", p1.x);
	printf("y = %d\n", p1.y);
	
	
	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
void atribui(struct ponto *p){
	// usando operador seta ->
	p -> x = 10; 
	p -> y = 20; 

}

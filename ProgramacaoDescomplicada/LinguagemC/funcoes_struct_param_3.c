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
			
	Podemos ainda usar o oprerador SETA "->" para
	acessar um campo de uma estrutura
	passada por referência.
	
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

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- variáveis globais --- //
struct ponto{
	int x;
	int y;
};

// --- protóritpo das funções auxiliares --- //
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

// --- desenvolvimento das funções auxiliares --- //
void atribui(struct ponto *p){
	// usando operador seta ->
	p -> x = 10; 
	p -> y = 20; 

}

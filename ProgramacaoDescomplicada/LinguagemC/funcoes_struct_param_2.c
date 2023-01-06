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
			
	
	// passando uma struct por referência
	struct ponto{
		int x;
		int y;
	};
	
	void atribui(struct ponto *p){
		(*p).x = 10; // certo
		(*p).y = 20; // certo
		// *p.x = 10; // errado	
		// *(p.x) = 10; // errado
		
		// Ao acessar uma estrutura passada por referência
		// não podemos esquecer de colocar os parênteses antes
		// de acessar o seu campo
	}
	
	int main(){
		struct ponto p1;
		atribui(&p1);
		printf("x = %d\n", p1.x);
		printf("y = %d\n", p1.y);
		return 0;
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
	(*p).x = 10; // certo
	(*p).y = 20; // certo
	// *p.x = 10; // errado	
	// *(p.x) = 10; // errado
	
	// Ao acessar uma estrutura passada por refereência
	// não podemos esquecer de colocar os parênteses antes
	// de acessar o seu campo
}

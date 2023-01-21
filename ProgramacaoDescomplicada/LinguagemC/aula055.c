/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:
	Programação Descomplicada
	aula 055 - Ponteiros Parte 1
	
	Variáveis: armazenam dados dos tipos int, float, double, char, struct, ....
	Ponteiros: tipo especial de variável que armazenam endereços de memória
	
	Forma geral de declaração:
	Variáveis: tipo_variável nome_variável;
		Ex: int x;
	
	Ponteiros: tipo_ponteiro *nome_ponteiro;
		Ex: int *x
	
	Ponteiros não inicializados apontam para um lugar (posição
	de memória) indefinido
		Ex: int *p;
	
	Um ponteiro pode ter um valor especial NULL que é
	o endereço de nenhum lugar (fora do range de memória)
		Ex: int *p = NULL;
	
	Podemos inicializar um ponteiro, apontando para uma variável
	que já exista no programa.
	
		int x = 10;	// x recebe o valor 10
		int *p;		// ponteiro p declarado com operador * asterisco
		p = &x;		// p recebe o endereço de memória de x
		
	Para acessar o valor da variável apontada por um ponteiro,
	usamos o operador asterisco *
	
		printf("*p = %d\n", *p);	
		// imprime o valor armazenado na posição de memória armazenada em p
		
	O operador asterisco * permite modificar o conteúdo da posição de 
	memória apontada por ele.
	
		*p = 12;
	
*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int x = 10;
	int *p;
	p = &x;
	
	printf("x = %d\n", x);
	printf("&x = %d\n", &x);
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);
	*p = 12;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);
	printf("x = %d\n", x);
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:
	Programação Descomplicada
	aula 057 - Ponteiros Parte 3
	Ponteiros Genéricos
	
	Ponteiro genérico, pode apontar para todos os tipos
	de dados existentes ou que serão criados
	
	Forma geral: void *nome_ponteiro;
	
	Exemplo: void *g;
	
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
	
	void *pp, *p;
	int *p1, p2=10;
	
	p1 = &p2;
	pp = &p2; // endereço de um int
	printf("Endereço de pp: %p\n", pp);
	pp = &p1; // endereço de um int*
	printf("Endereço de pp: %p\n", pp);
	pp = p1;  // endereço de um int
	printf("Endereço de pp: %p\n", pp);
	
	// antes de acessar o conteúdo é preciso converter o ponteiro
	// genérico para o tipo de ponteiro com o qual se deseja trabalhar
	
	// printf("Conteúdo: %d\n", *pp); // ERRADO!!!
	printf("Conteúdo: %d\n", *(int*)pp); // CERTO!!!
	
	// as operações aritméticas são sempre realizadas com base
	// em uma unidade de memória (1 byte)
	// *p = 0x5DC; // 1500 decimal
	printf("p = %d\n", p); // 1500 
	p++;
	printf("p = %d\n", p); // 1501
	p += 15;
	printf("p = %d\n", p); // 1516
	p -= 2;
	printf("p = %d\n", p); // 1514
	
	
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


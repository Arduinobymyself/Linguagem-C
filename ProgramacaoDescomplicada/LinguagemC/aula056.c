/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:
	Programação Descomplicada
	aula 056 - Ponteiros Parte 2
	Operações com Ponteiros
	
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
	
	int *p, *p1, *p2, x, y;
	char *c;
	float z = 20.0;
	// um ponteiro só pode receber o endereço de uma variável
	// do mesmo tipo do ponteiro
	x = 10;
	p = &x;
	printf("*p = %d\n", *p);
	p1 = p;
	printf("*p1 = %d\n", *p1);
	// p = &z; // ERRADO!!!
	
	// sobre o valor de endereço armazenado por um ponteiro
	// podemos apenas somar e subtrair valores INTEIROS!
	//*p2 = 0x05DC; // 1500 decimal
	printf("p2 = %d\n", p2); // 1500 
	p2++;
	printf("p2 = %d\n", p2); // 1504
	p2 += 15;
	printf("p2 = %d\n", p2); // 1564
	p2 -= 2;
	printf("p2 = %d\n", p2); // 1556
	
	//as operações de adição e subtração no endereço dependem do
	// tipo de dado que o ponteiro "aponta"
	//*p = 1500;
	//*c = 1500;
	printf("p = %d e c = %d\n", p, c);
	p++;
	c++;
	printf("p = %d e c = %d\n", p, c);
	
	// ponteiros poder ser comparados com os operadores de comparação
	// == != > >= < <=
	p = &x;
	p1 = &y;
	if(p == p1)
		printf("Ponteiros iguais!\n");
	else
		printf("Ponteiros diferentes!\n");
	if(p > p1)
		printf("p é maior que p1\n");
	else
		printf("p é menor ou igual a p1\n");
	
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


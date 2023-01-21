/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:
	Programa��o Descomplicada
	aula 056 - Ponteiros Parte 2
	Opera��es com Ponteiros
	
*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int *p, *p1, *p2, x, y;
	char *c;
	float z = 20.0;
	// um ponteiro s� pode receber o endere�o de uma vari�vel
	// do mesmo tipo do ponteiro
	x = 10;
	p = &x;
	printf("*p = %d\n", *p);
	p1 = p;
	printf("*p1 = %d\n", *p1);
	// p = &z; // ERRADO!!!
	
	// sobre o valor de endere�o armazenado por um ponteiro
	// podemos apenas somar e subtrair valores INTEIROS!
	//*p2 = 0x05DC; // 1500 decimal
	printf("p2 = %d\n", p2); // 1500 
	p2++;
	printf("p2 = %d\n", p2); // 1504
	p2 += 15;
	printf("p2 = %d\n", p2); // 1564
	p2 -= 2;
	printf("p2 = %d\n", p2); // 1556
	
	//as opera��es de adi��o e subtra��o no endere�o dependem do
	// tipo de dado que o ponteiro "aponta"
	//*p = 1500;
	//*c = 1500;
	printf("p = %d e c = %d\n", p, c);
	p++;
	c++;
	printf("p = %d e c = %d\n", p, c);
	
	// ponteiros poder ser comparados com os operadores de compara��o
	// == != > >= < <=
	p = &x;
	p1 = &y;
	if(p == p1)
		printf("Ponteiros iguais!\n");
	else
		printf("Ponteiros diferentes!\n");
	if(p > p1)
		printf("p � maior que p1\n");
	else
		printf("p � menor ou igual a p1\n");
	
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


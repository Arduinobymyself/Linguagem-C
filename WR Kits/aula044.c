/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula044 - Fun��es recursivas
	Exemplo: Fun��o recursiva pra retornar o fatorial de un n�mero
	
	n! = n * (n-1)!
	5! = 5 * 4 * 3 * 2 * 1 = 120
	7! = 7 * 6 * 5 * 4 * 3 * 2 * 1 = 5040
	10! = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 3628800

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
unsigned long int fatorial(int num);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");


	int num;
	unsigned long int fat;
	
	printf("\nDigite um n�mero: ");
	scanf("%d", &num);
	getchar();
	
	fat = fatorial(num);
	
	printf("\nO fatorial de %d � igua a %ld", num, fat);




	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
unsigned long int fatorial(int num){
	
	unsigned long int resultado;
	
	if(num == 1 || num == 0) return (1);
	resultado = num * fatorial(num - 1);
	
	return (resultado);
}


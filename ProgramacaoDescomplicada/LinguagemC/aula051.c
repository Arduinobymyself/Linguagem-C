/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Janeiro 2023
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	Programação Descomplicada
	aula051 - Recursividade: Definição
	
	Uma função chamar outras funções, inclusive
	a si própria. A isso damos o nome de recursividade
	
	Exemplo clássico é o cálculo de fatorial de um número
	condições:  n! = N * (n-1)! e 0! = 1
	Ex:
	fatorial de 5,... 5 * 4 * 3 * 2 * 1 = 120
	5! = 5 * 4!
	4! = 4 * 3!
	3! = 3 * 2!
	2! = 2 * 1!
	1! = 1 * 0!
	0! = 1
	
	A idéia básica da recursão é dividir para conquistar:
		problema maior --> problema menor
		solucionar problemas menores
		comibinar soluções
		
	Durante a implementação de uma função recursiva, temos que 
	ter em mente duas coisas:
		critério de parada;
		parâmetro da chamada recursiva;
		
	O critério de parada determina quando a função deve parar de 
	chamar a si mesma.
	No parâmetro da chamada recursiva, devemos sempre mudar o 
	valor do parâmetro passado, de fomra que a recursão
	chegue a um término.
	
	Algoritmos recursivos tendem a necessitar de mais tempo
	e ou espaço do que algoritmos iterativos
	Exemplo: Sequência de Fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //
int fatorial(int n);
int fibonacci(int n);

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int x = fatorial(5);
	printf("O fatorial de 5 é igual a %d\n", x);
	
	int y = fibonacci(13);
	printf("Fibonacci de 13 é igual a %d\n", y);


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
int fatorial(int n){
	if(n == 0){
		return 1; // critério de parada	
	} else { 	
		return n * fatorial(n - 1); // parâmetro da chamada recursiva
	}
}

int fibonacci(int n){
	int x;
	if(n == 0 || n == 1){
		return n;
	} else {
		x = (fibonacci(n - 1) + fibonacci(n - 2));
		return x; 
	}
		
}

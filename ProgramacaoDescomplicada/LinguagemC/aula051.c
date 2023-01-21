/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Janeiro 2023
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	Programa��o Descomplicada
	aula051 - Recursividade: Defini��o
	
	Uma fun��o chamar outras fun��es, inclusive
	a si pr�pria. A isso damos o nome de recursividade
	
	Exemplo cl�ssico � o c�lculo de fatorial de um n�mero
	condi��es:  n! = N * (n-1)! e 0! = 1
	Ex:
	fatorial de 5,... 5 * 4 * 3 * 2 * 1 = 120
	5! = 5 * 4!
	4! = 4 * 3!
	3! = 3 * 2!
	2! = 2 * 1!
	1! = 1 * 0!
	0! = 1
	
	A id�ia b�sica da recurs�o � dividir para conquistar:
		problema maior --> problema menor
		solucionar problemas menores
		comibinar solu��es
		
	Durante a implementa��o de uma fun��o recursiva, temos que 
	ter em mente duas coisas:
		crit�rio de parada;
		par�metro da chamada recursiva;
		
	O crit�rio de parada determina quando a fun��o deve parar de 
	chamar a si mesma.
	No par�metro da chamada recursiva, devemos sempre mudar o 
	valor do par�metro passado, de fomra que a recurs�o
	chegue a um t�rmino.
	
	Algoritmos recursivos tendem a necessitar de mais tempo
	e ou espa�o do que algoritmos iterativos
	Exemplo: Sequ�ncia de Fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //
int fatorial(int n);
int fibonacci(int n);

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int x = fatorial(5);
	printf("O fatorial de 5 � igual a %d\n", x);
	
	int y = fibonacci(13);
	printf("Fibonacci de 13 � igual a %d\n", y);


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
int fatorial(int n){
	if(n == 0){
		return 1; // crit�rio de parada	
	} else { 	
		return n * fatorial(n - 1); // par�metro da chamada recursiva
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

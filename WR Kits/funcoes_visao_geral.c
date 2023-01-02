/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	FUN��ES - um conjunto de comandos que recebe um nome 
	e pode ser chamada em qualquer lugar do programa principal
	quantas vezes foresm necess�rias.
	
	Vantagens: estrutura��o do programa e reutiliza��o de c�digos
	
	Onde declarar?
	Se for declarado depois do main(){...}, � necess�rio antes disso
	definir um prot�tipo da fun��o, para que o compilador entenda que
	a fun��o existe e ser� desenvolvida depois do main(){...}


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
int quadrado(int a);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int n, resultado;
	
	printf("\nEntre com um valor: ");
	scanf("%d", &n);
	getchar();
	
	resultado = quadrado(n);
	printf("\nO quadrado do n�mero %d � igual a %d.", n, resultado);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
int quadrado(int a){
	return (a * a);
}

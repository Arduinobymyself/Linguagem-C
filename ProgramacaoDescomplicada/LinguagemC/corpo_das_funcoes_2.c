/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula045b - Corpo das fun��es
	Exemplo: criando a fun��o fatorial()


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
int fatorial(int n);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int n, resultado; // declara��es
	printf("\nDigite o valor de n: "); // sa�da de informa��es
	scanf("%d", &n); // entrada de dados
	resultado = fatorial(n); // atribui��o de resultados
	printf("\nO fatorial de %d � igual a %d.\n", n, resultado); // apresenta��o de resultados


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
int fatorial(int n){
	int i, fat = 1;
	for(i = 1; i <= n; i++){
		fat = fat * i;
	}
	return fat;
}

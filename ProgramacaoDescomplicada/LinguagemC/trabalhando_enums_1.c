/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	ENUMS - uma lista de constantes, onde cada constante recebe um nome significativo 
	e tem um valor espec�fico, inciando por padr�o em 0
	
	enum nome_da_enum{
		constante1, // 0
		constante2, // 1
		constante3, // 2
		.
		.
		.
		constanteN, // N-1
	};
	
	caso seja necess�rio, podemos icnicializar o valor de uma constante conforme o necess�rio
	
	enum nome_da_enum{
		constante1 = 100, // 100
		constante2, // 101
		constante3, // 102
		.
		.
		.
		constanteN, 
	};
	


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //
enum dia_semana{
	Domingo = 1,
	Segunda,
	Terca,
	Quarta,
	Quinta,
	Sexta,
	Sabado,
};

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	enum dia_semana s;
	
	s = Sabado; // 7
	printf("\nValor = %d", s); // 7



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


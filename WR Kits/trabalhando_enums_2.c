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

	enum dia_semana s1, s2, s3;
	int i;
	
	s1 = Segunda; // 2
	s2 = Terca;   // 3
	s3 = s1 + s2; // 5 -> Quinta
	printf("\nValor = %d", Domingo);	// 1
	printf("\ns1 = %d", s1);			// 2
	printf("\ns2 = %d", s2);			// 3
	printf("\ns3 = %d", s3);			// 5
	if(s3 == Quinta){
		printf("\ns3 � igual %d ou seja Quinta", s3); // "s3 � igual a 5 ou seja Quinta"
	}

	


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


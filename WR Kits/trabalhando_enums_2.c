/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	ENUMS - uma lista de constantes, onde cada constante recebe um nome significativo 
	e tem um valor específico, inciando por padrão em 0
	
	enum nome_da_enum{
		constante1, // 0
		constante2, // 1
		constante3, // 2
		.
		.
		.
		constanteN, // N-1
	};
	
	caso seja necessário, podemos icnicializar o valor de uma constante conforme o necessário
	
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

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //
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
		printf("\ns3 é igual %d ou seja Quinta", s3); // "s3 é igual a 5 ou seja Quinta"
	}

	


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:

UNIONS

	union tipo{
		tipo1 var1;
		tipo2 var2;
		.
		.
		.
		tipoN varN;
	};
	
	UNION X STRUCT
	union utiliza compartilhamento de memória - reserva espaço somente para o elemento de maior tipo
	usa-se a união quando não vai ser necessário acessar as variáveis ao mesmo tempo.
*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //
struct tipoS{
	short int x;
	unsigned char c;
};

union tipoU{
	short int x;
	unsigned char c;
};

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	union tipoU U;
	U.x = 5;
	U.c = 'A'; // 97
	printf("\nUnion x = %d", U.x);
	printf("\nUnion c = %c", U.c);
	
	struct tipoS S;
	S.x = 5;
	S.c = 'A';
	printf("\nStruct x = %d", S.x);
	printf("\nStruct c = %c", S.c);
	
	
	
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


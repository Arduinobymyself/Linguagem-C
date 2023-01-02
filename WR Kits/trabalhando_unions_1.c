/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:

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
	union utiliza compartilhamento de mem�ria - reserva espa�o somente para o elemento de maior tipo
	usa-se a uni�o quando n�o vai ser necess�rio acessar as vari�veis ao mesmo tempo.
*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //
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

// --- desenvolvimento das fun��es auxiliares --- //


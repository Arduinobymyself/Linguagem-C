/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	Unions - exemplos 2
	minipulação de bits


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //
union tipoU{
	short int x;
	unsigned char c[2];
};

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	/*
	// sem union
	short int x = 1545; // 0b 00000110 00001001
	unsigned char c0, c1;
	
	c0 = 0x00FF & x; // 00001001 -> 9, and bit a bit
	c1 = x >> 8; // 00000110 -> 6, shift right de 8 bits
	printf("\nx = %d", x);
	printf("\nc0 = %d", c0);
	printf("\nc1 = %d", c1);
	*/
	
	// usando unions
	
	union tipoU U;
	U.x = 1545; // 0b 00000110 00001001
	printf("\nx = %d", U.x);
	printf("\nc[0] = %d", U.c[0]); // 00001001 -> 9
	printf("\nc[1] = %d", U.c[1]); // 00000110 -> 6
	
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


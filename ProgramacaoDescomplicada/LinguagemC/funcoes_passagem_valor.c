/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula047 - Fun��es - Passagem por valor
	
	
	A linguagem C permite dois tipos de passagem de par�metros para uma fun��o
	(1) Por valor:  c�pia do valor do dado original (padr�o)
	(2) Por referencia: endere�o de mem�ria do dado original
	
	Passagem por valor: uma c�pia do dado � feita e passada para a fun��o
	� o modo padr�o para os tipos b�sicos pr�-definidos: int, char, float e double
	e tipos definidos pelo programador: struct
	
	Exemplos:
	void imprime_log(float x);
	int maior(int x, int y);
	void exibe_dados(struct aluno a);



*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
void soma_mais_um(int n);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int x = 5;
	printf("\nAntes da fun��o ser chamada, x vale %d", x); // 5
	soma_mais_um(x); // passa a copia do valor de "x"
	printf("\nDepois da fun��o ser chamada, x vale %d", x); // 5
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
void soma_mais_um(int n){ // o valor de "x" � copiado e a tribu�do �  "n"
	n = n + 1;
	printf("\nDentro da fun��o, x vale %d", n); // 6
}

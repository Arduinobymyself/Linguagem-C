/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Janeiro 2023
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula048 - Fun��es - Passagem por refer�ncia
	
	Passagem por refer�ncia: o endere�o de onde o dado 
	est� armazenado na mem�ria � passado para a fun��o.
	Assim, a fun��o pode modificar o valor do par�metro.
	
	Exemplo:
	Fun��o scanf();
	
	int x = 5;
	printf("\nAnted do scanf, x vale %d\n", x); // 5 definido pelo programador
	printf("\nDigite um m�mero: ");
	scanf("%d", &x);
	printf("\nDepois do scanf, x vale %d\n", x); // valor digitado pelo usu�rio
	
	Par�metro por refer�ncia: usa-se o operador "*" na frente do nome
	do par�metro durante a declara��o da fun��o.
	Ex:
	void soma_mais_um(int n); // passagem padr�o por valor
	void soma_mais_um(int *n); // passagem por refer�ncia
	
	Toda vez que a vari�vel for usada, o operador "*"
	dever� ser usado na frente do nome da vari�vel.
	void soma_mais_um(int *n){
		*n = *n + 1;
	}
	
	Par�metro por refer�ncia: na chamada da fun��o 
	� necess�rio utilizar o operador "&" na frente do nome da vari�vel
	que ser� passada por refer�ncia.
	Ex:
	int x;
	printf("\nAnted do scanf, x vale %d\n", x);
	soma_mais_um(&x);
	printf("\nDepois do scanf, x vale %d\n", x);
	


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
void soma_mais_um(int *n);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	/*
	// Exemplo com scanf() para passagem por refer�ncia
	int x = 5;
	printf("\nAnted do scanf, x vale %d\n", x); // 5 definido pelo programador
	printf("\nDigite um m�mero: ");
	scanf("%d", &x); // "x" � passado por refer�ncia ou seja foi passado o endere�o de mem�ria de "x" 
	printf("\nDepois do scanf, x vale %d\n", x); // valor digitado pelo usu�rio
	*/
	
	// exemplo usando a fun��o soma_mais_um();
	int x = 5;
	printf("\nAntes da fun��o ser chamada, x vale %d", x); // 5
	soma_mais_um(&x); // passa o endere�o de mem�ria de "x"
	printf("\nDepois da fun��o ser chamada, x vale %d", x); // 6
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
void soma_mais_um(int *n){ // o valor de mem�ria de "x" passado a "n"
	*n = *n + 1; // o valor armazenado no endere�o de mem�ria n � somado em 1
	printf("\nDentro da fun��o, x vale %d", *n); // 6
}

/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula045 - corpo de uma fun��o
	
	O corpo de uma fun��o processa as entradas (par�metros) e gera as sa�das
	(retorno - comando return) da fun��o.
	� formada por declara��es, atribui��es e comandos
	
	// basicamente
	tipo_de_retorno nome_da_fun��o(par�metros){
		declara��es;
		atribui��es;
		bloco_de_comandos;
	}


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	// exmplo de fun��o main()	
	int n, i, fat = 1; // declara��es
	
	printf("\nDigite o valor de n: "); // sa�da de informa��o
	scanf("%d", &n); // entrada de dados
	
	for(i = 1; i <= n; i++){ // processamento
		fat = fat * i;
	}
	
	printf("\nO fatorial de %d � igual a %d.\n", n, fat); //saida de informa��o




	printf("\n\n");
	//system("pause");
	return 0; // retorno da fun��o
}

// --- desenvolvimento das fun��es auxiliares --- //


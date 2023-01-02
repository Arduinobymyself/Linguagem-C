/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula046 - Retorno de uma fun��o (return)
	return (valor | express�o);

	tipo_de _retorno nome_da_fun��o(par�metros){
		declara��es;
		atribui��es;
		comandos;
		
		return (valor | express�o);
		
	}

	tipos de retorno de fun��o:
	int, char, float, double
	void
	struct
	pointers 
	
	Um array s� pode ser retornado se ele estiver dentro de um struct.
	
	Fun��es que n�o sejam do tipo void devem sempre retornar um valor.
	Para cham�-la (nome e par�metros), basta atribuir o retorno da fun��o 
	a uma vair�vel.
	Ex:
	int soma(int x, int y){
		return (x + y);
	}
	
	// atribuindo a "x" o retorno da chamada � fun��o "soma" com parametros "2" e "4"
	int x = soma(2, 4); 
	
	Uma fun��o pode ter mais de um comando return
	Ex:
	int maior(int x, int y){
		if(x > y)
			return x;
		else
			return y;
	}
	
	Quando se chega a um comando return, a fun��o � encerrada (termina imediatamente).
	Ex:
	int maior(int x, int y){
		if(x > y)
			return x;
		else
			return y;
		printf("\nFim da Fun��o!\n); // esse comando nunca ser� executado
	}
	
	O comando return pode ser usado sem uma expres�o | valor de retorno 
	para terminar uma fun��o do tipo void.
	Ex:
	void imprime_log(float x){
		if(x <= 0)
			return // termina a fun��o 
		printf("Log = %f\n", log(x));
	}

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
void imprime_log(float x);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	float f;
	printf("Digite um valor em ponto flutuante: ");
	scanf("%f", &f);
	imprime_log(f);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
void imprime_log(float x){
	if(x <= 0)
		return; // termina a fun��o 
	printf("Log = %f\n", log(x));
}

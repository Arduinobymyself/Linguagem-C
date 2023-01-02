/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula046 - Retorno de uma função (return)
	return (valor | expressão);

	tipo_de _retorno nome_da_função(parâmetros){
		declarações;
		atribuições;
		comandos;
		
		return (valor | expressão);
		
	}

	tipos de retorno de função:
	int, char, float, double
	void
	struct
	pointers 
	
	Um array só pode ser retornado se ele estiver dentro de um struct.
	
	Funções que não sejam do tipo void devem sempre retornar um valor.
	Para chamá-la (nome e parâmetros), basta atribuir o retorno da função 
	a uma vairável.
	Ex:
	int soma(int x, int y){
		return (x + y);
	}
	
	// atribuindo a "x" o retorno da chamada à função "soma" com parametros "2" e "4"
	int x = soma(2, 4); 
	
	Uma função pode ter mais de um comando return
	Ex:
	int maior(int x, int y){
		if(x > y)
			return x;
		else
			return y;
	}
	
	Quando se chega a um comando return, a função é encerrada (termina imediatamente).
	Ex:
	int maior(int x, int y){
		if(x > y)
			return x;
		else
			return y;
		printf("\nFim da Função!\n); // esse comando nunca será executado
	}
	
	O comando return pode ser usado sem uma expresão | valor de retorno 
	para terminar uma função do tipo void.
	Ex:
	void imprime_log(float x){
		if(x <= 0)
			return // termina a função 
		printf("Log = %f\n", log(x));
	}

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
void imprime_log(float x);

// --- variáveis globais --- //

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

// --- desenvolvimento das funções auxiliares --- //
void imprime_log(float x){
	if(x <= 0)
		return; // termina a função 
	printf("Log = %f\n", log(x));
}

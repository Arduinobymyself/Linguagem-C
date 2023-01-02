/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula047 - Funções - Passagem por valor
	
	
	A linguagem C permite dois tipos de passagem de parâmetros para uma função
	(1) Por valor:  cópia do valor do dado original (padrão)
	(2) Por referencia: endereço de memória do dado original
	
	Passagem por valor: uma cópia do dado é feita e passada para a função
	É o modo padrão para os tipos básicos pré-definidos: int, char, float e double
	e tipos definidos pelo programador: struct
	
	Exemplos:
	void imprime_log(float x);
	int maior(int x, int y);
	void exibe_dados(struct aluno a);



*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
void soma_mais_um(int n);

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int x = 5;
	printf("\nAntes da função ser chamada, x vale %d", x); // 5
	soma_mais_um(x); // passa a copia do valor de "x"
	printf("\nDepois da função ser chamada, x vale %d", x); // 5
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
void soma_mais_um(int n){ // o valor de "x" é copiado e a tribuído à  "n"
	n = n + 1;
	printf("\nDentro da função, x vale %d", n); // 6
}

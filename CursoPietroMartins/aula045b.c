/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula045b - Corpo das funções
	Exemplo: criando a função fatorial()


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
int fatorial(int n);

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int n, resultado; // declarações
	printf("\nDigite o valor de n: "); // saída de informações
	scanf("%d", &n); // entrada de dados
	resultado = fatorial(n); // atribuição de resultados
	printf("\nO fatorial de %d é igual a %d.\n", n, resultado); // apresentação de resultados


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
int fatorial(int n){
	int i, fat = 1;
	for(i = 1; i <= n; i++){
		fat = fat * i;
	}
	return fat;
}

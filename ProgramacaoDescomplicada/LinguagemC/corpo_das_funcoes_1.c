/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula045 - corpo de uma função
	
	O corpo de uma função processa as entradas (parâmetros) e gera as saídas
	(retorno - comando return) da função.
	É formada por declarações, atribuições e comandos
	
	// basicamente
	tipo_de_retorno nome_da_função(parâmetros){
		declarações;
		atribuições;
		bloco_de_comandos;
	}


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	// exmplo de função main()	
	int n, i, fat = 1; // declarações
	
	printf("\nDigite o valor de n: "); // saída de informação
	scanf("%d", &n); // entrada de dados
	
	for(i = 1; i <= n; i++){ // processamento
		fat = fat * i;
	}
	
	printf("\nO fatorial de %d é igual a %d.\n", n, fat); //saida de informação




	printf("\n\n");
	//system("pause");
	return 0; // retorno da função
}

// --- desenvolvimento das funções auxiliares --- //


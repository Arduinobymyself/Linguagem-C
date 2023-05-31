/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	FUNÇÕES - um conjunto de comandos que recebe um nome 
	e pode ser chamada em qualquer lugar do programa principal
	quantas vezes foresm necessárias.
	
	Vantagens: estruturação do programa e reutilização de códigos
	
	Onde declarar?
	Se for declarado depois do main(){...}, é necessário antes disso
	definir um protótipo da função, para que o compilador entenda que
	a função existe e será desenvolvida depois do main(){...}


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
int quadrado(int a);

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int n, resultado;
	
	printf("\nEntre com um valor: ");
	scanf("%d", &n);
	getchar();
	
	resultado = quadrado(n);
	printf("\nO quadrado do número %d é igual a %d.", n, resultado);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
int quadrado(int a){
	return (a * a);
}

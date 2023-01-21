/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:

	Uma variável é uma posição de memória que armazena um dado que pode ser usado pelo programa.
	Deve ser declarada durante ao desenvolvimento do programa.
	Ex:
	int x, y;
	float c;
	char nome[50];
	
	Problema:
	Precisamos construir um rograma que processe os vaores dos salários de funionários
	de uma empresa. Quantos funcionários? 10, 50, 500????
	Solução:
	Declara um array gigante!!! pouco elegante!!!
	float salarios[1000];
	
	Se a empresa tem mais de 1000 funcionários, não dá, se só tem 100, é desperdício de memória.
	
	Considere o seguinte:
	- arrays são agrupamentos de dados de um mesmo tipo na memória.
	- um ponteiro guarda o endereço de um dado na memória.
	- o nome de um array é um ponteiro para o primeiro elemento do array.
	
	Idéia:
	Posso solicitar um boco de memória e colocar a sua primeira posição em um ponteiro???
	
	A Linguagem C permite alocar (reservar) dinâmicamente (em tempo de execução) blocos
	de memória utilizando ponteiros.  A esse processo dá-se o nome de ALOCAÇÃO DINÂMICA!
	
	A linguagem C ANSI usa apenas 4 funções para alocação dinâmica, disponíveis na 
	biblioteca <stdlib.h>
	- malloc
	- calloc
	- realloc
	- free
	
	Existe também o operador sizeof().
	
	

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


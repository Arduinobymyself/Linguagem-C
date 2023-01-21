/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:

	Uma vari�vel � uma posi��o de mem�ria que armazena um dado que pode ser usado pelo programa.
	Deve ser declarada durante ao desenvolvimento do programa.
	Ex:
	int x, y;
	float c;
	char nome[50];
	
	Problema:
	Precisamos construir um rograma que processe os vaores dos sal�rios de funion�rios
	de uma empresa. Quantos funcion�rios? 10, 50, 500????
	Solu��o:
	Declara um array gigante!!! pouco elegante!!!
	float salarios[1000];
	
	Se a empresa tem mais de 1000 funcion�rios, n�o d�, se s� tem 100, � desperd�cio de mem�ria.
	
	Considere o seguinte:
	- arrays s�o agrupamentos de dados de um mesmo tipo na mem�ria.
	- um ponteiro guarda o endere�o de um dado na mem�ria.
	- o nome de um array � um ponteiro para o primeiro elemento do array.
	
	Id�ia:
	Posso solicitar um boco de mem�ria e colocar a sua primeira posi��o em um ponteiro???
	
	A Linguagem C permite alocar (reservar) din�micamente (em tempo de execu��o) blocos
	de mem�ria utilizando ponteiros.  A esse processo d�-se o nome de ALOCA��O DIN�MICA!
	
	A linguagem C ANSI usa apenas 4 fun��es para aloca��o din�mica, dispon�veis na 
	biblioteca <stdlib.h>
	- malloc
	- calloc
	- realloc
	- free
	
	Existe tamb�m o operador sizeof().
	
	

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


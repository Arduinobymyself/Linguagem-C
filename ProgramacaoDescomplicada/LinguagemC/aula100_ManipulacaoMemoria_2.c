/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //
void imprime(int *v, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d, ", v[i]);
	}
	printf("\n");
}

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	int v[5] = {1, 2, 3, 4, 5}; // vetor de 5 inteiros = 20 bytes
	imprime(v, 5); // 1, 2, 3, 4, 5, 
	
	memset(v, 0, 4); // zera somente 4 bytes ou seja 1 int
	imprime(v, 5); // 0, 2, 3, 4, 5, 
	
	memset(v, 0, 20); // sera 20 bytes, ou seja 4 ints
	imprime(v, 5); // 0, 0, 0, 0, 0, 
	
	memset(v, 1802, 4);// 1802 = 00000111 00001010 4 bytes com esse valor = 168430090
	imprime(v, 5); // 168430090, 0, 0, 0, 0,
	
	memset(v, 1802, 5); // 4 bytes(1 int) com (168430090) + 1 byte (do segundo int),  
						// no segundo int preenche somente com 00001010 = 10
	imprime(v, 5); // 168430090, 10, 0, 0, 0,
	

	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


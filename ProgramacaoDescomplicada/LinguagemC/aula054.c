/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Janeiro 2023
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	
		Programação Descomplicada
		aula 054 - Recursão: Exemplo
		
	Crie uma função recursiva que calcule o
	somatório de 1 a N
	soma(4) = 1 + 2 + 3 + 4
	soma(3) = 1 + 2 + 3
	soma(2) = 1 + 2
	soma(1) = 1
	ou seja:
	soma(4) = 4 + soma(3)
	soma(3) = 3 + soma(2)
	soma(2) = 2 + soma(1)
	soma(1) = 1 + soma(0)
	



*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //
int soma(int n);

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	int x;
	
	// caso base
	x = soma(0);
	printf("soma(0) = %d\n", x);
	
	// generalizando
	x = soma(5);
	printf("soma(5) = %d\n", x);
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
int soma(int n){
	if(n == 0){
		return 0;
	} else {
		return (n + soma(n - 1));
	}
}

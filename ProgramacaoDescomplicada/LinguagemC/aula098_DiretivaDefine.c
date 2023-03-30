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
#include <locale.h>



// --- definição de parâmetros --- //
#define valor 10
#define PI 3.1415926
#define maior(x, y) x>y?x:y
#define prod1(x, y) x*y
#define prod2(x, y) (x)*(y)
#define TROCA(a, b, c){ \
	c t = a; \
	a = b; \
	b = t; }

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	int a = 1, b = 2;
	int c;

	#ifdef valor
		printf("Valor definido\n");
	#else
		printf("Valor não definido\n");
	#endif

	printf("Valor de PI = %f\n", PI);
	
	c = maior(a, b);
	printf("Maiorvalor = %d\n", c);
	
	c = prod1(a+2, b);
	printf("Prod1 = %d\n", c);
	
	c = prod2(a+2, b);
	printf("Prod2 = %d\n", c);
	
	printf("Antes da troca: a= %d e b = %d\n", a, b);
	TROCA(a, b, int);
	printf("Depois da troca: a= %d e b = %d\n", a, b);
	
	#undef valor
	#define valor 20
	printf("Agora valor vale: %d", valor);
	
	

	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


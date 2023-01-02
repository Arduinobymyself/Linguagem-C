#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula041 - vari�veis globais vs vair�veis locais
	
	os 3 motivos para se evitar o uso de vair�veis globais:
	
	1) ocupam a mem�ria durante todo o tempo em que o programa est� sendo
	   executado, n�o somente quando necess�rio.
	2) usar uma vari�vel local torna menos geral uma fun��o, pois ela depender�
	   de alguma defini��o externa.
	3) um grande n�mero de vari�veis globais pode ocasionar erros no projeto
	   devido a efeitos desconhecidos.
*/


// vair�veis globais
int contador;

void funcao1();
void funcao2();

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	// vari�veis locais
	contador = 200;
	
	funcao1();


	printf("\n\n");
	//system("pause");
	return 0;
}

void funcao1(){
	funcao2();
	printf("\nO valor do contador � %d", contador);
}

void funcao2(){
	int contador;
	for(contador = 1; contador < 40; contador++){
		printf("=*");
	}
}

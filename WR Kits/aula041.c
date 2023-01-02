#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula041 - variáveis globais vs vairáveis locais
	
	os 3 motivos para se evitar o uso de vairáveis globais:
	
	1) ocupam a memória durante todo o tempo em que o programa está sendo
	   executado, não somente quando necessário.
	2) usar uma variável local torna menos geral uma função, pois ela dependerá
	   de alguma definição externa.
	3) um grande número de variáveis globais pode ocasionar erros no projeto
	   devido a efeitos desconhecidos.
*/


// vairáveis globais
int contador;

void funcao1();
void funcao2();

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	// variáveis locais
	contador = 200;
	
	funcao1();


	printf("\n\n");
	//system("pause");
	return 0;
}

void funcao1(){
	funcao2();
	printf("\nO valor do contador é %d", contador);
}

void funcao2(){
	int contador;
	for(contador = 1; contador < 40; contador++){
		printf("=*");
	}
}

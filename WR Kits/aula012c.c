#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	utilizando funções no laço For
	
	programa que calcula o quadrado de números inteiros
	
	encerra ao digitar o número 0
	
*/


// protótipo de funções
void display();
int leitura();
void caculaQuadrado();

int main(){
	setlocale(LC_ALL, "Portuguese");

	int valor;
	
	for(display(); valor = leitura(); display()){
		calculaQuadrado(valor);
	}
	


	printf("\n\n");
	//system("pause");
	return 0;
}

void display(){
	printf("\n=== CALCULA QUADRADOS ===\n");
	printf("Informe um número inteiro para calcular o quadrado\n");
	printf("Ou digite 0 para sair: ");
}

int leitura(){
	int t;
	scanf("%d", &t);
	getchar();
	return t;
}

void calculaQuadrado(int numero){
	printf("\nResultado: %d\n", numero * numero);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula036 - Funções - functions()
	tipo_da_função nome_da_função(parâmetros/argumentos){
		bloco de instruções;
	}
	
	exemplo:
	void imprimir();
	int soma(int a, int b);
*/

// protótipo da função (declaração de existência)
void imprimir();
int *soma(int a, int b);

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");




	
	imprimir(); // chamada a função, não tem retorno
	
	
	int resultado, x, y;	
	int *calc;
	calc = soma(2,2); // chamada a função e atribui valor de retorno à variável resultado
	x = calc[0];
	y = calc[1];
	resultado = calc[2];
	printf("\nSoma de %d com %d = %d", x, y, resultado);





	printf("\n\n");
	//system("pause");
	return 0;
}

// desenvolvimento das funções
void imprimir(){
	printf("\nHello World!");
	printf("\nANSI C Course.");
	printf("\n");
}

int *soma(int a, int b)
{
	int retorno[3];
	retorno[0] = a;
	retorno[1] = b;
	retorno[2] = a+b;
	return retorno;// retorna um vetor de inteiros [a, b, a+b]
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula036 - Fun��es - functions()
	tipo_da_fun��o nome_da_fun��o(par�metros/argumentos){
		bloco de instru��es;
	}
	
	exemplo:
	void imprimir();
	int soma(int a, int b);
*/

// prot�tipo da fun��o (declara��o de exist�ncia)
void imprimir();
int *soma(int a, int b);

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");




	
	imprimir(); // chamada a fun��o, n�o tem retorno
	
	
	int resultado, x, y;	
	int *calc;
	calc = soma(2,2); // chamada a fun��o e atribui valor de retorno � vari�vel resultado
	x = calc[0];
	y = calc[1];
	resultado = calc[2];
	printf("\nSoma de %d com %d = %d", x, y, resultado);





	printf("\n\n");
	//system("pause");
	return 0;
}

// desenvolvimento das fun��es
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

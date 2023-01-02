#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula040 - regras de escopo e vari�veis locais
*/

// vari�veis globais a todas as fun��es

void function();

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	// vari�veis locais a main()
	int a=100, b=200, c=300, d=400;
	
	printf("\nNa fun��o main(), a=%d, b=%d, c=%d e d=%d", a, b, c, d);
	
	function();
	
	// a vari�vel z n�o � vis�vel fora do if()
	if(a < b){
		int z = 30;
		printf("\nz=%d", z);
	}

	printf("\n\n");
	//system("pause");
	return 0;
}

void function(){
	
	// vari�veis locais a function()
	int a=10, b=20, c=30, d=40;
	printf("\nNa fun��o function(), a=%d, b=%d, c=%d 4 d=%d", a, b, c, d);
	
}

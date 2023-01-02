#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula040 - regras de escopo e variáveis locais
*/

// variáveis globais a todas as funções

void function();

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	// variáveis locais a main()
	int a=100, b=200, c=300, d=400;
	
	printf("\nNa função main(), a=%d, b=%d, c=%d e d=%d", a, b, c, d);
	
	function();
	
	// a variável z não é visível fora do if()
	if(a < b){
		int z = 30;
		printf("\nz=%d", z);
	}

	printf("\n\n");
	//system("pause");
	return 0;
}

void function(){
	
	// variáveis locais a function()
	int a=10, b=20, c=30, d=40;
	printf("\nNa função function(), a=%d, b=%d, c=%d 4 d=%d", a, b, c, d);
	
}

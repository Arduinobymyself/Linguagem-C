#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 014 - diferen�a entre while e do-while
	
	for(;;){...} - loop infinito
	while(1){...} - loop infinito
	
	// while pode ou n�o executar o bloco de comandos
	// testa a condi��o no in�cio, se for false nem executa o bloco de comandos
	
	while(condi��o){
		bloco de comandos;
	}
	
	// do-while executa o bloco de comandos ao menos uma vez
	// testa a condi��o no final ap�s executar o bloco de comandos
	
	do{
		bloco de comandos;
	}while(condi��o);
	
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int opcao = 1;
	
	do{
		printf("\nDigite uma opcao: 1 - sim, 2 - n�o ");
		scanf("%d", &opcao);
		getchar();
	}while(opcao < 1 || opcao > 2);

	printf("\nOp��o Validada!");

	printf("\n\n");
	//system("pause");
	return 0;
}

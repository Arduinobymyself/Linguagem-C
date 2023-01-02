#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 014 - diferença entre while e do-while
	
	for(;;){...} - loop infinito
	while(1){...} - loop infinito
	
	// while pode ou não executar o bloco de comandos
	// testa a condição no início, se for false nem executa o bloco de comandos
	
	while(condição){
		bloco de comandos;
	}
	
	// do-while executa o bloco de comandos ao menos uma vez
	// testa a condição no final após executar o bloco de comandos
	
	do{
		bloco de comandos;
	}while(condição);
	
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int opcao = 1;
	
	do{
		printf("\nDigite uma opcao: 1 - sim, 2 - não ");
		scanf("%d", &opcao);
		getchar();
	}while(opcao < 1 || opcao > 2);

	printf("\nOpção Validada!");

	printf("\n\n");
	//system("pause");
	return 0;
}

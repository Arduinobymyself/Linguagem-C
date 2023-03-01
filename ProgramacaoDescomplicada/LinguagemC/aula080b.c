/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	if(argc == 1){
		printf("Programa %s sem parâmetros\n", argv[0]);
	} else{
		int i, soma = 0;
		printf("Soma dos parâmetros do programa %s: \n", argv[0]);
		for(i=1; i<argc; i++){
			soma += atoi(argv[i]);
			// função atoi(); converte string para inteiro, biblioteca <stdlib.h>
		}
		printf("Soma = %d", soma);
	}
	




	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


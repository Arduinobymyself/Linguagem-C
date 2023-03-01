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
		int i;
		printf("Parâmetros do programa %s: \n", argv[0]);
		for(i=1; i<argc; i++){
			printf("Parâmetro %d: %s\n", i, argv[i]);
		}
	}
	
	/*
	Para rodar; ir ao prompt do DOS, na pasta do programa, 
	e chamar pelo nome do programa com alguns parâmetros separados por espaço
	Ex: C:\aula080.exe nome marcelo idade 52
	O que dará a seguinte saída:
	
	Parâmetros do programa aula080:
	Parâmetro 1: nome
	Parâmetro 2: marcelo
	Parâmetro 3: idade
	Parâmetro 4: 52
	
	*/



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


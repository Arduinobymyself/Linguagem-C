/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	if(argc == 1){
		printf("Programa %s sem par�metros\n", argv[0]);
	} else{
		int i;
		printf("Par�metros do programa %s: \n", argv[0]);
		for(i=1; i<argc; i++){
			printf("Par�metro %d: %s\n", i, argv[i]);
		}
	}
	
	/*
	Para rodar; ir ao prompt do DOS, na pasta do programa, 
	e chamar pelo nome do programa com alguns par�metros separados por espa�o
	Ex: C:\aula080.exe nome marcelo idade 52
	O que dar� a seguinte sa�da:
	
	Par�metros do programa aula080:
	Par�metro 1: nome
	Par�metro 2: marcelo
	Par�metro 3: idade
	Par�metro 4: 52
	
	*/



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


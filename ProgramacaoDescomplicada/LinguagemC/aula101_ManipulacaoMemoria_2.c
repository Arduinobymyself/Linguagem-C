/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
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
	system("cls");
	printf("\n\n");
	

	char str[50] = {"Exemplo de string em linguagem C."};
	char *p;
	p = (char*)memchr(str, 's', strlen(str));
	if(p != NULL){
		printf("Encontrado! Posi��o: %d\n", (p-str+1));
	} else{
		printf("N�o encontrado!");
	}
	

	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


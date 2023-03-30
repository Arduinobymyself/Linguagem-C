/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
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
	system("cls");
	printf("\n\n");
	

	char str[50] = {"Exemplo de string em linguagem C."};
	char *p;
	p = (char*)memchr(str, 's', strlen(str));
	if(p != NULL){
		printf("Encontrado! Posição: %d\n", (p-str+1));
	} else{
		printf("Não encontrado!");
	}
	

	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


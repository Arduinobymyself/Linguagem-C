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



// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //
struct pessoa{
	char nome[50];
	int idade;
};

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	struct pessoa p1 = {"marcelo", 51};
	struct pessoa p2 = {"marcelO", 51};
	int resultado;
	resultado = memcmp(&p1, &p2, sizeof(struct pessoa));
	if(resultado == 0){
		printf("P1 e P2 s�o iguais\n");
	} else if(resultado > 0){
		printf("P1 � maior do que P2\n");
	} else{
		printf("P2 � maior do que P1\n");
	}


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


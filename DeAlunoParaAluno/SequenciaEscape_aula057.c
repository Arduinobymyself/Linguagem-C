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
	

	// SEU C�DIGO AQUI
	/*
	Sequencias de scape
	\a alarme sonoro do sistema
	\b move o cursor uma posi��o � esquerda
	\n pula para a pr�xima linha
	\t tabula��o
	\r volta para o in�cio da linha
	\0 caracter nulo
	\" caractere "
	\' caractere '
	\\ caractere \
	*/
	
	printf("Erro!\a\n");
	printf("\rMarcelo\t Pinto\t de\t Moraes \"BIGDOG\"");



	printf("\n\n");
	getchar();
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //



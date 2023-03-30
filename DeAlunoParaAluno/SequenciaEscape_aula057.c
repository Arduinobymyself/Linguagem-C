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
	

	// SEU CÓDIGO AQUI
	/*
	Sequencias de scape
	\a alarme sonoro do sistema
	\b move o cursor uma posição à esquerda
	\n pula para a próxima linha
	\t tabulação
	\r volta para o início da linha
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

// --- desenvolvimento das funções auxiliares --- //



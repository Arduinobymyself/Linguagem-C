/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula045 - Arquivos - introdu��o



*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	FILE *arquivo; // ponteiro para o arquivo
	
	arquivo = fopen("ArquivoTeste.txt", "w"); // cria o arquivo
	 
	fprintf(arquivo, "\n\nHello World!\n\n"); // escreve a mensagem no arquivo

	fclose(arquivo); // fecha o arquivo


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


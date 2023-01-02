/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula045 - Arquivos - introdução



*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //

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

// --- desenvolvimento das funções auxiliares --- //


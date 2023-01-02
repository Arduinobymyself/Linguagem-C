/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula048 - escrevendo strings em arquivos


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	FILE *arquivo;
	char frase[50];
	
	printf("\nDigite a frase para salvar: ");
	gets(frase); // l� a frase
	fflush(stdin); // limpa teclado
	
	arquivo = fopen("ArquivoString.txt", "w"); // abre o arquivo para leitura
	
	fwrite(frase, 1, strlen(frase), arquivo); // escreve a frase no arquivo
	
	fclose(arquivo);
	
	printf("\nArquivo criado com sucesso!");



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


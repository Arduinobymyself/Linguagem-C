/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula048 - escrevendo strings em arquivos


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	FILE *arquivo;
	char frase[50];
	
	printf("\nDigite a frase para salvar: ");
	gets(frase); // lê a frase
	fflush(stdin); // limpa teclado
	
	arquivo = fopen("ArquivoString.txt", "w"); // abre o arquivo para leitura
	
	fwrite(frase, 1, strlen(frase), arquivo); // escreve a frase no arquivo
	
	fclose(arquivo);
	
	printf("\nArquivo criado com sucesso!");



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


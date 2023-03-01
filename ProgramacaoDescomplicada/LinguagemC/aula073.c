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
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	

	FILE *f;
	f = fopen("arquivo.txt", "w")	;
	if(f == NULL){
		printf("Erro na abertura do arquivo!\n");
		system("pause");
		exit(1);
	}
	char texto[50] = "Meu primeiro programa em linguagem C 2023";
	int retorno = fputs(texto, f);
	if(retorno == EOF){
		printf("Erro na gravação do arquivo!\n");
	} else{
		printf("Arquivo gravado com seucesso!\n");
	}
	
	fputc('\n', f);
	fputs("Marcelo", f);
	fputc('\n', f);
	fputs("Moraes", f);
	
	fputs("\nHello", f);
	fputs("\nWorld", f);
	
	fclose(f);
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


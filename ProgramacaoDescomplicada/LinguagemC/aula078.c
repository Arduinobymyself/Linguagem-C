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
	
	
	char texto[50], nome[50];
	int idade;
	float altura;
	
	FILE *f;
	f = fopen("dados_pessoais.txt", "r")	;
	if(f == NULL){
		printf("Erro na abertura do arquivo!");
		system("pause");
		exit(1);
	}
	
	fscanf(f, "%s %49[^\n]s", texto, nome);
	printf("%s %s\n", texto, nome);
	fscanf(f, "%s %d", texto, &idade);
	printf("%s %d\n", texto, idade);
	fscanf(f, "%s %f", texto, &altura);
	printf("%s %.2f\n", texto, altura);
	
	
	fclose(f);
	

	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


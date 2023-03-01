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
	
	
	char nome[50] = "Marcelo Moraes";
	int idade = 52;
	float altura = 1.69;
	
	FILE *f;
	f = fopen("dados_pessoais.txt", "w")	;
	if(f == NULL){
		printf("Erro na abertura do arquivo!");
		system("pause");
		exit(1);
	}
	printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, idade, altura);
	fprintf(f, "Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, idade, altura);
	fclose(f);
	

	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


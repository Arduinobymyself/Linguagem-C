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

// --- desenvolvimento das fun��es auxiliares --- //


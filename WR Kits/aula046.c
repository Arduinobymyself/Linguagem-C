/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula046 - lendo e modificando o conte�do de arquivos


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
void le_arquivo(int *p);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int vetor[10];
	
	
	le_arquivo(vetor);
	
	printf("\nO arquivo foi lido e criado com sucesso.\n\n");


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
void le_arquivo(int *p){
	
	FILE *arquivo;
	char i = 0;
	
	arquivo = fopen("C:\\Users\\ABMS-Telecom\\PROGRAMA��O\\LINGUAGEM C C++\\ArquivoTeste.txt", "r");
	for(i = 0; i < 9; i++){
		fscanf(arquivo, "%d\n", &p[i]);
	}
	
	arquivo = fopen("ArquivoTeste2.txt", "w");
	for(i = 0; i < 9; i++){
		fprintf(arquivo, "%d\n", p[i]+2);
	}
	
	fclose(arquivo);
	
}

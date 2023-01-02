/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula046 - lendo e modificando o conteúdo de arquivos


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
void le_arquivo(int *p);

// --- variáveis globais --- //

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

// --- desenvolvimento das funções auxiliares --- //
void le_arquivo(int *p){
	
	FILE *arquivo;
	char i = 0;
	
	arquivo = fopen("C:\\Users\\ABMS-Telecom\\PROGRAMAÇÃO\\LINGUAGEM C C++\\ArquivoTeste.txt", "r");
	for(i = 0; i < 9; i++){
		fscanf(arquivo, "%d\n", &p[i]);
	}
	
	arquivo = fopen("ArquivoTeste2.txt", "w");
	for(i = 0; i < 9; i++){
		fprintf(arquivo, "%d\n", p[i]+2);
	}
	
	fclose(arquivo);
	
}

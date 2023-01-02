/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula047 - organizando vetores dentro de arquivos


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
void crescente(int *p);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int vetor[11]; // arquivo tem 10 linhas, mas devemos consideral caracter nulo no final... 11 posi��es
	
	crescente(&vetor[0]);
	
	printf("\nVetor organizado com sucesso!\n");




	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
void crescente(int *p){
	int i, j, acc = 0;
	
	FILE *lerascii;
	
	lerascii = fopen("Arquivo.txt", "r"); // abreo o arquivo origem como leitura
	
	for(i = 0; i < 10; i++){
		fscanf(lerascii, "%d\n", &p[i]); // l� o arquivo original e armazena no vetor p
	}
	
	lerascii = fopen("ArquivoOrdemCrescente.txt", "w"); // abre o arquivo destino como escrita 
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(p[i] > p[j]){
				acc = p[i];
				p[i] = p[j];
				p[j] = acc;
			}
		}
		fprintf(lerascii, "%d\n", p[i]); // salva o valor modificado no arquivo destino
		
		
	}
	
	fclose(lerascii); // fecha o arquivo
	
}


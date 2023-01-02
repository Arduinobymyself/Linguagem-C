/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula050 - conversão de arquivos binários para CSV


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "estruturas.h"

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
void converte_csv(char *arquivo);

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	converte_csv("ArquivoDados.bin");
	printf("\nConversão bem sucedida!\n\n");



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
void converte_csv(char *arquivo){
	
	printf("\nConverte para CSV %s\n", arquivo);
	
	char arquivo_csv[50];
	int n;
	registro_t x[60];
	
	FILE *arquivo_bin = fopen(arquivo, "rb");
	
	if(arquivo_bin == NULL){
		printf("\nOcorreu um erro na leirtura!");
	}
	
	sprintf(arquivo_csv, "%s.csv", arquivo);
	
	FILE *arq_csv = fopen(arquivo_csv, "w");
	
	fputs("\nRegistro, data, hora, leitura\r\n", arq_csv);
	
	for(n = 0; n < 60; n++){
		fread(&x[n], sizeof(registro_t), 1, arquivo_bin);
		fprintf(arq_csv, "%d, %d%d%d, %d:%d:%d, %d\r\n",
		x[n].numero,
		x[n].datahora.dia,
		x[n].datahora.mes,
		x[n].datahora.ano,
		x[n].datahora.hora,
		x[n].datahora.minuto,
		x[n].datahora.segundo,
		x[n].leitura);
	}
	fclose(arq_csv);
	fclose(arquivo_bin);
	
}

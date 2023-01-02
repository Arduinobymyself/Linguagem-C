/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula049 - lendo arquivos de dados binários


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //

// --- variáveis globais --- //
typedef struct relogio{
	int segundos;
	int minutos;
	int horas;
	int dias;
	int meses;
	int anos;
} relogio_t;

typedef struct registro{
	int numero;
	relogio_t data_hora;
	int leitura;
	int teste;
} registro_t;

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	// variáveis
	int n = 0;
	registro_t x[60];
	FILE *leitura_bin;
	
	// lendo arquivo binário
	leitura_bin = fopen("ArquivosDados.bin", "rb");
	fread(&x[0], sizeof(registro_t), 1, leitura_bin);
	
	for(n = 0; n < 60; n++){
		printf("%d\t%d\n", n, x[n].numero);
	}
	





	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


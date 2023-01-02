/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula049 - lendo arquivos de dados bin�rios


*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- vari�veis globais --- //
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
	
	// vari�veis
	int n = 0;
	registro_t x[60];
	FILE *leitura_bin;
	
	// lendo arquivo bin�rio
	leitura_bin = fopen("ArquivosDados.bin", "rb");
	fread(&x[0], sizeof(registro_t), 1, leitura_bin);
	
	for(n = 0; n < 60; n++){
		printf("%d\t%d\n", n, x[n].numero);
	}
	





	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


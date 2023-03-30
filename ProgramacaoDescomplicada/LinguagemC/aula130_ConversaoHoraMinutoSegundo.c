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
#include <math.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //
int converte(int h, int m, int s);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");



	//SEU CÓDIGO AQUI
	int h, m, s, t;
	printf("Digite hora, minuto, segundo: ");
	scanf("%d %d %d", &h, &m, &s);

	t = converte(h, m, s);
    printf("Tempo convertido para segundos: %d", t);


	printf("\n\n");
	system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
int converte(int h, int m, int s){
    int ts;
    ts = s + m*60 + h*3600;
    return ts;
}

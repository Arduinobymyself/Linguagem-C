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
#include "Ponto.h"
//#include <string.h>
//#include <math.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	// SEU C�DIGO AQUI
	float d;
	Ponto *p, *q;
	p = cria_pto(10,21);
	q = cria_pto(7, 25);
	d = distancia_pto(p,q);
	printf("Dist�ncia entre pontos: %f\n", d);
	libera_pto(p);
	libera_pto(q);



	printf("\n\n");
	// getchar(); //  melhor do que system("pause");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //



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
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	// SEU C�DIGO AQUI
	int i;
	
	for(i=1; i<=100; i++){
		if(i % 3 == 0 && i % 9 == 0){
			printf("%d, divis�vel por 3 e 9\n", i);
			//break; // mostra somente o primeiro n�mero divis�vel por 3 e por 9
				   // sem ele iria testar at� 100 e ver todos os divis�veis
		} else{
			printf("%d, n�o �\n", i);
		}
	}
	
	getchar();



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //



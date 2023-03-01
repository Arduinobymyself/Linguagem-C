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

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	int N, nro = 5;
	N = nro;
	int i, achou = 0;
	
	while(achou == 0){
		achou = 1;	
		for(i=2; i<=N; i++){
			if(nro % i != 0){
				achou = 0;
				break;
			}
		}
		if(achou == 1){
			printf("Nro = %d\n", nro);
		} else {
			nro += 2;	
		}
	}
	


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


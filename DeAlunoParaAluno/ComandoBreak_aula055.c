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
	

	// SEU CÓDIGO AQUI
	int i;
	
	for(i=1; i<=100; i++){
		if(i % 3 == 0 && i % 9 == 0){
			printf("%d, divisível por 3 e 9\n", i);
			//break; // mostra somente o primeiro número divisível por 3 e por 9
				   // sem ele iria testar até 100 e ver todos os divisíveis
		} else{
			printf("%d, não é\n", i);
		}
	}
	
	getchar();



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //



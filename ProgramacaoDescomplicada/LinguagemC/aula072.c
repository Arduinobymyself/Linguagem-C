/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Janeiro 2023
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
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	FILE *f;
	f = fopen("arquivo.txt", "r");
	if(f == NULL){
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char c;
	int i;
	
	/*
	// l� uma parte do arquivo
	for(i=1; i<=12; i++){
		c = fgetc(f);
		printf("%c", c);
	}
	printf("\nFIM!\n");
	fclose(f);
	*/
	
	// l� at� o final do arquivo
	c = fgetc(f);
	while(!feof(f)){
		printf("%c", c);
		c = fgetc(f);
	}
	printf("\nFIM!\n");
	fclose(f);
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


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

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //

// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	FILE *f;
	
	// abre o arquivo para escrita "w" write devolve um ponteiro para arquivo
	f = fopen("arquivo.txt", "w");
	 
	// C:\Users\ABMS-Telecom\Documents\GitHub\Linguagem-C
	if(f == NULL){ // verifica se o arquivo foi aberto com sucesso
		printf("Erro na abertura!\n");
		system("pause");
		exit(1); // aborta o programa
	} else {
		printf("Abertura bem sucedida!\n");
	}
	
	fclose(f);
	

	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


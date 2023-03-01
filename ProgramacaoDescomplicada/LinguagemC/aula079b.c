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
struct cadastro{
	char nome[30];
	char rua[30];
	int numero;
};
// --- prot�ritpo das fun��es auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	
	FILE *f;
	f = fopen("endereco.txt", "rb")	;
	if(f == NULL){
		printf("Erro na abertura do arquivo!");
		system("pause");
		exit(1);
	}
	
	struct cadastro cad;
	fseek(f, 2*sizeof(struct cadastro), SEEK_SET);
	fread(&cad, sizeof(struct cadastro), 1, f);
	printf("%s\n%s\n%d\n", cad.nome, cad.rua, cad.numero);
	printf("\n");
	
	rewind(f);
	
	fseek(f, 3*sizeof(struct cadastro), SEEK_SET);
	fread(&cad, sizeof(struct cadastro), 1, f);
	printf("%s\n%s\n%d\n", cad.nome, cad.rua, cad.numero);
	printf("\n");
	
	fclose(f);
	

	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


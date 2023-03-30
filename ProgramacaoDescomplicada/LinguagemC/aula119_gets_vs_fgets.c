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
#include <locale.h>
#include <string.h>


// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	//system("cls");
	printf("\n\n");


	char senha[10];
	int flag = 0;

	printf("Digite a senha: ");
	//gets(senha);
	fgets(senha, 10,stdin);

	if(strcmp(senha, "1234") == 0) flag = 1;

	if(flag){
        printf("ACESSO APROVADO!\n");
	} else {
        printf("ACESSO NEGADO!\n");
	}


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


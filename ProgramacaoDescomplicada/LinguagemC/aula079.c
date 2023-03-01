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
struct cadastro{
	char nome[30];
	char rua[30];
	int numero;
};
// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	
	FILE *f;
	f = fopen("endereco.txt", "wb")	;
	if(f == NULL){
		printf("Erro na abertura do arquivo!");
		system("pause");
		exit(1);
	}
	
	struct cadastro cad[4]	= {"Marcelo", "Rua 1", 123,
							   "Carlos", "Rua 2", 345,
							   "Ricardo", "Rua 3", 567,
							   "Ana", "Rua 4", 789 	
	};
	fwrite(cad, sizeof(struct cadastro), 4, f);
	
	

	
	
	fclose(f);
	

	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


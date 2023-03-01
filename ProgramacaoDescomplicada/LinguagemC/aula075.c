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
	char endereco[30];
	int numero;
};
// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	
	
	struct cadastro cad = {"Marcelo Moraes", "Av. Dr. Amando Pannunzio", 1893};
	
	FILE *f;
	f = fopen("vetor.txt", "wb")	;
	if(f == NULL){
		printf("Erro na abertura do arquivo!");
		system("pause");
		exit(1);
	}
	
	char str[50] = "Meu primeiro programa em linguagem C";
	int total_gravado, v[5] = {1, 2, 3, 4, 5};
	float x = 5.92;
	
	total_gravado = fwrite(v, sizeof(int), 5, f);
	if(total_gravado != 5){
		printf("Erro na escrita do arquivo!\n");
	} else{
		printf("Arquivo gravado com sucesso\n");
	}
	
	fwrite(str, sizeof(char), 50, f);
	fwrite(&x, sizeof(float), 1, f);
	fwrite(&cad, sizeof(struct cadastro), 1, f);
	
	fclose(f);
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


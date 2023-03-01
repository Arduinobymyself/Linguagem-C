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
	
	
	FILE *f;
	f = fopen("vetor.txt", "rb")	;
	if(f == NULL){
		printf("Erro na abertura do arquivo!");
		system("pause");
		exit(1);
	}

	int total_lido, v[5];
	total_lido = fread(v, sizeof(int), 5, f);
	
	if(total_lido != 5){
		printf("Erro na leitura do arquivo!\n");
	} else{
		printf("Arquivo lido com sucesso\n");
	}
	
	char str[50];
	float x;
	struct cadastro cad;
	
	fread(str, sizeof(char), 50, f);
	fread(&x, sizeof(float), 1, f);
	fread(&cad, sizeof(struct cadastro), 1, f);

	fclose(f);
	
	int i;
	for(i = 0; i<5; i++ ){
		printf("%d ", v[i]);
	}
	printf("\n");
	printf("%s\n", str);
	printf("%.3f\n", x);
	printf("%s -> %s, %d", cad.nome, cad.endereco, cad.numero);
	



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


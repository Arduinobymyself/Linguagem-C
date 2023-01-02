/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula043 - Matrizes como parâmetros para funções
	Nunca passamos a matriz inteira como parâmetro
	e sim o endereço dela em memória ou o primeiro elemento
	
*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções --- //
void exemplo1(int mat1[10]);
void exemplo2(int mat2[]);
void exemplo3(int *mat3);

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// o endereço do primeiro elemento é passado para a função
	exemplo1(t); 
	printf("\n\n");
	exemplo2(t);
	printf("\n\n");
	exemplo3(t);


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções --- //
void exemplo1(int mat1[10]){
	int i;
	for(i = 0; i < 10; i++) printf("%d ", mat1[i]);
}

void exemplo2(int mat2[]){
	int i;
	for(i = 0; i < 10; i++) printf("%d ", mat2[i]);
}

void exemplo3(int *mat3){
	int i;
	for(i = 0; i < 10; i++) printf("%d ", mat3[i]);
}

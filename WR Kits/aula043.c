/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	aula043 - Matrizes como par�metros para fun��es
	Nunca passamos a matriz inteira como par�metro
	e sim o endere�o dela em mem�ria ou o primeiro elemento
	
*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es --- //
void exemplo1(int mat1[10]);
void exemplo2(int mat2[]);
void exemplo3(int *mat3);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// o endere�o do primeiro elemento � passado para a fun��o
	exemplo1(t); 
	printf("\n\n");
	exemplo2(t);
	printf("\n\n");
	exemplo3(t);


	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es --- //
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

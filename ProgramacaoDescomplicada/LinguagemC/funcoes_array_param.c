/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Janeiro 2023
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
		aula049 - Fun��es - Array como Par�metro
		
		Arrays s�o sempre passados por Refer�ncia para uma fun��o.
		Isso evita a c�pia desnecess�ria de grandes 
		quantidades de dados para outras �reas de mem�ria 
		durante a chamada da fun��o, o que afetaria o
		desempenho do programa.
		
		Passsando um array por refer�ncia:
		Geralmente passamos o array por refer�ncia e o tamanho do array por valor
		void imprime(int *m, int n);    // como ponteiro
		void imprime(int m[], int n);   // endere�o do primeiro elemento sem tamanho definido
		void imprime(int m[5], int n);  // endere�o do primeiro elemento com tamanho definido
		
		Exemplo:
		
		void imprime_vetor(int *m, int n){
			int i;
			for(i = 0; i < n; i++)
				printf("%d ", m[i]);
		}
		// na fun��o continuamos usando o colchete [] e o �ndice
		
		int main(){
			int vetor[5] = {1, 2, 3, 4, 5};
			imprime_vetor(vetor, 5);
			return 0;
		} 
		// na chamada da fun��o, usa-se apenas o nome do array
		// (sem colchete e �ndice), sem o operador "&".
		
		Arrays com mais de uma dimens�o precisam da 
		informa��o do tamanho das outras dimens�es.
		EX:
		void imprime_matriz(int m[][3], int n){
			int i, j;
			for(i = 0; i < n; i++){
				for(j = 0; j < 3; j++){
					printf("%d ", m[i][j]);
				}
				printf("\n");
			}
		}
		
		



*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
void imprime_vetor(int *m, int n);
void imprime_matriz(int m[][3], int n);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	/*
	// teste de vetor fun��o imprime_vetor();
	int vetor[5] = {1, 2, 3, 4, 5};
	imprime_vetor(vetor, 5);
	*/
	
	
	// teste de matriz fun��o imprime_matriz();
	int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	imprime_matriz(matriz, 3);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //
void imprime_vetor(int *m, int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", m[i]);
}

void imprime_matriz(int m[][3], int n){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
		
}

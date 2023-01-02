/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Janeiro 2023
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
		aula049 - Funções - Array como Parâmetro
		
		Arrays são sempre passados por Referência para uma função.
		Isso evita a cópia desnecessária de grandes 
		quantidades de dados para outras áreas de memória 
		durante a chamada da função, o que afetaria o
		desempenho do programa.
		
		Passsando um array por referência:
		Geralmente passamos o array por referência e o tamanho do array por valor
		void imprime(int *m, int n);    // como ponteiro
		void imprime(int m[], int n);   // endereço do primeiro elemento sem tamanho definido
		void imprime(int m[5], int n);  // endereço do primeiro elemento com tamanho definido
		
		Exemplo:
		
		void imprime_vetor(int *m, int n){
			int i;
			for(i = 0; i < n; i++)
				printf("%d ", m[i]);
		}
		// na função continuamos usando o colchete [] e o índice
		
		int main(){
			int vetor[5] = {1, 2, 3, 4, 5};
			imprime_vetor(vetor, 5);
			return 0;
		} 
		// na chamada da função, usa-se apenas o nome do array
		// (sem colchete e índice), sem o operador "&".
		
		Arrays com mais de uma dimensão precisam da 
		informação do tamanho das outras dimensões.
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

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
void imprime_vetor(int *m, int n);
void imprime_matriz(int m[][3], int n);

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	/*
	// teste de vetor função imprime_vetor();
	int vetor[5] = {1, 2, 3, 4, 5};
	imprime_vetor(vetor, 5);
	*/
	
	
	// teste de matriz função imprime_matriz();
	int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	imprime_matriz(matriz, 3);



	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
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

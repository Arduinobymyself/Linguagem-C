/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Maio 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ListaDinamicaDuplamenteEncadeada.h"
#include <string.h>
//#include <math.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");


	// SEU CÓDIGO AQUI
	
	//definição dos dados dos alunos
	struct aluno aluno1;
	struct aluno aluno2;
	struct aluno aluno3;
	struct aluno aluno4;
	struct aluno aluno5;
	struct aluno aluno6;
	
	aluno1.matricula = 123;
	strcpy(aluno1.nome, "Marcelo");

	aluno2.matricula = 234;
	strcpy(aluno2.nome, "Flora");

	aluno3.matricula = 345;
	strcpy(aluno3.nome, "Sara");

	
	aluno4.matricula = 456;
	strcpy(aluno4.nome, "Solange");

	
	aluno5.matricula = 567;
	strcpy(aluno5.nome, "Eliane");

	
	aluno6.matricula = 678;
	strcpy(aluno6.nome, "Taís");




	
	Lista* li;
	
	li = cria_lista(); // li recebe o endereço de memória da lista
	printf("O endereço em memória da lista é: %d\n\n", li);
	
	int tamanhoLista = tamanho_lista(li);
	printf("Tamanho da lista: %d\n\n", tamanhoLista);
	
	int listaVazia = lista_vazia(li);
	if(listaVazia){
		printf("A lista está vazia!\n\n");
	} else {
		printf("A lista não está vazia!\n\n");
	}

	insere_inicio(li, aluno1);
	insere_inicio(li, aluno2);
	insere_inicio(li, aluno3);
	insere_inicio(li, aluno4);
	insere_inicio(li, aluno5);
	insere_inicio(li, aluno6);
	
	tamanhoLista = tamanho_lista(li);
	printf("Tamanho da lista: %d\n\n", tamanhoLista);
	
	imprime(li);
	




	libera_lista(li);
	printf("Alocação de memória da lista liberada!");


	printf("\n\n");
	// getchar(); //  melhor do que system("pause");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //



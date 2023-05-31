#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ListaSequencial.h"


int main(){
	
	struct aluno dados_aluno; // cria uma estrutura de dados dos aluno do tipo aluno
	
	Lista *li; // ponteiro para a lista li do Tipo Lista
	
	li = cria_lista(); // aloca memória para a lista li
	
	int tam = tamanho_lista(li);
	printf("Tamanho = %d\n", tam);
	printf("===========================\n");
	

	if(lista_cheia(li)){
		printf("Lista cheia\n");
	}
	if(lista_vazia(li)){
		printf("Lista vazia\n");
	}
	
	printf("===========================\n");
	
	int dados;
	
	
	dados_aluno.matricula = 123;
	strcpy(dados_aluno.nome, "Marcelo");
	insere_inicio(li, dados_aluno);

	dados_aluno.matricula = 321;
	strcpy(dados_aluno.nome, "Flora");
	insere_final(li, dados_aluno);

	dados_aluno.matricula = 222;
	strcpy(dados_aluno.nome, "Sara");
	insere_final(li, dados_aluno);

	imprime(li);
	
	
	/*
	dados = insere_ordenada(li, dados_aluno);
	dados = remove_final(li);
	dados = remove_inicio(li);
	dados = remove_ordenada(li, dados_aluno.matricula);
	dados = consulta_posicao(li, 3, &dados_aluno);
	dados = consulta_matricula(li, 123, &dados_aluno);
	*/
	

	
	tam = tamanho_lista(li);
	printf("Tamanho = %d\n", tam);
	
	
	
	
	
	libera_lista(li);
	
	
	return 0;
}


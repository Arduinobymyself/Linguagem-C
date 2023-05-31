#include <stdio.h>
#include <stdlib.h>
#include "ListaDinamicaDuplamenteEncadeada.h"

struct elemento { // estrutura de um elemento (n�) da lista
	struct elemento* ant;
	struct elemento* prox;
	struct aluno dados;
};

typedef struct elemento Elemento; // Elemento do tipo (struct elemento)

// ===== defini��o das fun��es ===== //
Lista* cria_lista(){ // cria a cabe�a da lista
	Lista* li = (Lista*) malloc(sizeof(Lista)); // aloca parti��o de mem�ria
	if(li != NULL) *li = NULL; // apontando para nulo
	return li; // retorna o ender�o da lista
}

void libera_lista(Lista* li){
	if(li != NULL){
		Elemento* no;
		while((*li) != NULL){
			no = *li;
			*li = (*li)->prox;
			free(no);
		}
		free(li);
	}
}

int tamanho_lista(Lista* li){
	if(li == NULL) return 0;
	int cont = 0;
	Elemento* no = *li;
	while(no != NULL){
		cont++;
		no = no->prox;
	}
	return cont;
}

int lista_cheia(Lista* li){
	return 0;
}

int lista_vazia(Lista* li){
	if(li == NULL) return 1;
	if(*li == NULL) return 1;
	return 0;
}

int insere_inicio(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento));
	if(no == NULL) return 0;
	no->dados = al; // atualiza o conte�do do novo n�
	no->prox = (*li); // n� aponta para onde o in�cio da lista apontava
	no->ant = NULL; // n� aponta para o anterior que � sempre nulo (inserindo no in�cio)
	// lista n�o vazia, apontar para o anterior
	if(*li != NULL) // sen�o � uma lista vazia
		(*li)->ant = no; // ponteiro anterior do n� atual aponta para o novo n�
	*li = no; // cabe�a da lista aponta para o novo n�
	return 1;
}

int insere_final(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento));
	if(no == NULL) return 0;
	no->dados = al; // atualiza os dados
	no->prox = NULL; // inserindo no final, sempre aponta pra nulo
	if((*li) == NULL) { // lista vazia, insere in�cio
		no->ant = NULL; // sempre aponta para nulo (primeiro n�)
		*li = no; // a cabe�a da lista � o novo n�
	} else { // lista n�o vazia
		Elemento* aux = *li; // n� auxiliar para n�o perder o in�cio da lista
		while(aux->prox != NULL) // percorre toda alista at� o final
			aux = aux->prox; // vai p/ o pr�ximo n� at� nulo
		aux->prox = no; // aponta pra o pr�ximo
		no->ant = aux; // novo n� aponta para o��ltimo elemento
	}
	return 1;
}

int insere_ordenada(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento));
	if(no == NULL) return 0;
	no->dados = al;
	if(lista_vazia(li)){ // inserindo no in�cio
		no->prox = NULL;
		no->ant = NULL;
		*li = no;
		return 1;
	} else { // procura onde inserir
		Elemento *anterior, *atual = *li; // n�s auxiliares
		while(atual != NULL && atual->dados.matricula < al.matricula){ //procura at� achar ou chegar em nulo
			anterior = atual; // anterior passa a apontar para o atual
			atual = atual->prox; // atual passa a apontar para o pr�ximo
		}
		if(atual == *li){ // insere no in�cio
			no->ant = NULL; // sempre nulo (in�co da lista)
			(*li)->ant = no; // o anterior aponta para o novo n�
			no->prox = (*li); // aponta pra a lista
			*li = no; // n� � o primeiro da lista
		} else { // insere no meio ou no final
			no->prox = anterior->prox; // aponta p/ onde apontava o anterior
			no->ant = anterior; // aponta p/ o anterior
			anterior->prox = no; // anterior aponta para o n�
			if(atual != NULL) // n�o � o final da lista... meio
				atual->ant = no; // aponta para o n�
		}
		return 1;
	}
}





void imprime(Lista* li){
	int i;
	Elemento* no = *li;
	while(no != NULL){
		printf("\n===== Aluno #%d =====", i+1);
		printf("\nMatricula: %d, ", no->dados.matricula);
		printf("\nNome: %s, ", no->dados.nome);
		printf("\nNota 1: %d ", no->dados.n1);
		printf("\nNota 2: %d ", no->dados.n2);
		printf("\nNota 3: %d ", no->dados.n3);
		printf("\n=====================\n\n\n");
  		no = no->prox;
		i++;
	}

}

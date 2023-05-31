#include <stdio.h>
#include <stdlib.h>
#include "ListaDinamicaDuplamenteEncadeada.h"

struct elemento { // estrutura de um elemento (nó) da lista
	struct elemento* ant;
	struct elemento* prox;
	struct aluno dados;
};

typedef struct elemento Elemento; // Elemento do tipo (struct elemento)

// ===== definição das funções ===== //
Lista* cria_lista(){ // cria a cabeça da lista
	Lista* li = (Lista*) malloc(sizeof(Lista)); // aloca partição de memória
	if(li != NULL) *li = NULL; // apontando para nulo
	return li; // retorna o enderço da lista
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
	no->dados = al; // atualiza o conteúdo do novo nó
	no->prox = (*li); // nó aponta para onde o início da lista apontava
	no->ant = NULL; // nó aponta para o anterior que é sempre nulo (inserindo no início)
	// lista não vazia, apontar para o anterior
	if(*li != NULL) // senão é uma lista vazia
		(*li)->ant = no; // ponteiro anterior do nó atual aponta para o novo nó
	*li = no; // cabeça da lista aponta para o novo nó
	return 1;
}

int insere_final(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento));
	if(no == NULL) return 0;
	no->dados = al; // atualiza os dados
	no->prox = NULL; // inserindo no final, sempre aponta pra nulo
	if((*li) == NULL) { // lista vazia, insere início
		no->ant = NULL; // sempre aponta para nulo (primeiro nó)
		*li = no; // a cabeça da lista é o novo nó
	} else { // lista não vazia
		Elemento* aux = *li; // nó auxiliar para não perder o início da lista
		while(aux->prox != NULL) // percorre toda alista até o final
			aux = aux->prox; // vai p/ o próximo nó até nulo
		aux->prox = no; // aponta pra o próximo
		no->ant = aux; // novo nó aponta para o´último elemento
	}
	return 1;
}

int insere_ordenada(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento));
	if(no == NULL) return 0;
	no->dados = al;
	if(lista_vazia(li)){ // inserindo no início
		no->prox = NULL;
		no->ant = NULL;
		*li = no;
		return 1;
	} else { // procura onde inserir
		Elemento *anterior, *atual = *li; // nós auxiliares
		while(atual != NULL && atual->dados.matricula < al.matricula){ //procura até achar ou chegar em nulo
			anterior = atual; // anterior passa a apontar para o atual
			atual = atual->prox; // atual passa a apontar para o próximo
		}
		if(atual == *li){ // insere no início
			no->ant = NULL; // sempre nulo (iníco da lista)
			(*li)->ant = no; // o anterior aponta para o novo nó
			no->prox = (*li); // aponta pra a lista
			*li = no; // nó é o primeiro da lista
		} else { // insere no meio ou no final
			no->prox = anterior->prox; // aponta p/ onde apontava o anterior
			no->ant = anterior; // aponta p/ o anterior
			anterior->prox = no; // anterior aponta para o nó
			if(atual != NULL) // não é o final da lista... meio
				atual->ant = no; // aponta para o nó
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

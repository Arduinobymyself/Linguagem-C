#include <stdlib.h>
#include <stdio.h>
#include "ListaDinamicaEncadeada.h"

struct elemento{
	struct aluno dados;     // campo de dados do nó do tipo aluno (struct)
	struct elemento* prox;  // campo de ponteiro do nó (próximo elemento da lista)
};

typedef struct elemento Elemento; // um elemento da lista um nó



// ===== implementação das funções ===== //
Lista* cria_lista(){
	Lista* li = (Lista*)malloc(sizeof(Lista)); // reserva memória para o primeiro elemnto (nó) da lista
	if(li != NULL) *li = NULL; // inicia com NULL, aponta pra NULL, lista vazia
	return li; // retorna o endereço da lista
}

void libera_lista(Lista* li){
	if(li != NULL){
		Elemento* no; // ponteiro para o elemento (nó)
		while((*li) != NULL){// enquanto não chegar em NULL
			no = *li; // nó igual ao inicio da lista
			*li = (*li)->prox; // inicio da lista aponta pra o próximo nó
			free(no);// libera espaço da posição do nó
		}
		free(li); // libera inicio da lista
	}
}

int tamanho_lista(Lista* li){
	if(li == NULL) return 0;
	int cont = 0;
	Elemento* no = *li; // nó auxiliar para não perder o início da lista
	while(no != NULL){ // enquanto não chegar no final da lista (NULL)
		cont++; // incrementa contagem de nós
		no = no->prox; // próximo nó
	}
	return cont;
}

int lista_cheia(Lista* li){
	return 0; // não existe o conceito de cheia
}


int lista_vazia(Lista* li){
	if(li == NULL) return 1;
	if(*li == NULL) return 1; // se o head da lista é NULL
	return 0;
}


int insere_inicio(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento)); // novo elemento da lista (nó)
	if(no == NULL) return 0; // não consegue alocar
	no->dados = al;   // insere od dados do nó
	no->prox = (*li); // aponta para onde o head da lista estava apontando
	*li = no;         // início da lista passa a ser o novo nó
	return 1;
}


int insere_final(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento)); // aloca memória para o novo nó
	if(no == NULL) return 0;
	no->dados = al; // insere os dados do nó
	no->prox = NULL; // aponta para null, inserindo no final da lista
	if((*li) == NULL){ // se lista vazia: insere no início
		*li = no; // head d lista aponta para o novo nó
	} else { // se não for lista vazia e
		Elemento* aux = *li; // cria nó auxiliar e aponta o head da lista
		while(aux->prox != NULL){ // percorre até achar o final NULL
			aux = aux->prox; // próximo nó
		}
		aux->prox = no; // aux aponta para o novo nó
	}
	return 1;
}

int insere_ordenada(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento)); // cria o novo nó
	if(no == NULL) return 0;
	if(lista_vazia(li)){ // lista vazia? insere no início
		no->prox = (*li); // aponta para o head
		*li = no; // head aponta para o nó
		return 1;
	} else { // procura onde inserir
		Elemento *ant, *atual = *li;
		while(atual != NULL && atual->dados.matricula < al.matricula){ // percorre a lista
			ant = atual; // anterior passa a ser o atual
			atual = atual->prox; // atual passa a ser o próximo
		}
		if(atual == *li){ // é o início da lista?
			no->prox = (*li); // aponta para a cabeça da lista
			*li = no; // início da lista aponta para o novo nó
		} else { // insere após um nó anterior (no meio ou no final)
			no->prox = ant->prox; // novo nó aponta para onde o nó anterior apontava
			ant->prox = no; // o nó anterior aponta para o novo nó
		}
		return 1;
	}
}


int remove_inicio(Lista* li){
	if(li == NULL) return 0;
	if((*li) == NULL) return 0; // lista vazia
	Elemento* no = *li; // nó auxiliar  para início da lista cabeça
	*li = no->prox; // início aponta para o elemento seguinte
	free(no); // libera o nó
	return 1;
}

int remove_final(Lista* li){
	if(li == NULL) return 0;
	if((*li) == NULL) return 0; // lista vazia
	Elemento *ant, *no = *li; // auxiliares, nó = iníco da lista
	while(no->prox != NULL){ // percorre a lista até NULL
		ant = no; // anterior recebe o nó
		no = no->prox; // nó recebe o próximo elemento
	}
	if(no == (*li)) *li = no->prox; // nó igual ao início da lista, remover o primeiro?
	else ant->prox = no->prox; // anterior irá apontar para onde apontava o nó
	free(no); // libera o nó
	return 1;
}

int remove_meio(Lista* li, int mat){
	if(li == NULL) return 0;
	Elemento *ant, *no = *li;
	while(no != NULL && no->dados.matricula != mat){ // procura até achar na lista
		ant = no; // anterior aponta para onde apontava o nó
		no = no->prox; // nó aponta para o próximo
	}
	if(no == NULL) return 0; // não encontrado
	if(no == *li) *li = no->prox; // remover o primeiro? cabeça da lista aponta pra o próximo
	else ant->prox = no->prox; // anterior aponta para onde o nó apontava
	free(no); // libera o nó
	return 1;
}

int consulta_posicao(Lista* li, int pos, struct aluno* al){
	if(li == NULL || pos <= 0) return 0;
	Elemento* no = *li; // ponteiro auxiliar apontando para o início da lista
	int i = 1;
	while(no != NULL && i < pos){ // percorre a lista
		no = no->prox; // anda para o próximo elemento
		i++;
	}
	if(no == NULL) return 0; // não encontrado... lista vazia
	else {
		*al = no->dados; // recebe o conteudo achado
		return 1;
	}
}

int consulta_matricula(Lista* li, int mat, struct aluno* al){
	if(li == NULL) return 0;
	Elemento* no = *li; // ponteiro auxiliar apontando para o início da lista
	while(no != NULL && no->dados.matricula != mat){ // percorre a lista
		no = no->prox; // anda para o próximo elemento
	}
	if(no == NULL) return 0; // não encontrado... lista vazia
	else {
		*al = no->dados; // recebe o conteudo achado
		return 1;
	}
}


void imprime(Lista* li){
	int i;
	Elemento* no = *li;
	while(no != NULL){
		printf("\n===== Aluno #%d =====", i+1);
		printf("\nid: %d, ", no->dados.id);
		printf("\nMatricula: %d, ", no->dados.matricula);
		printf("\nNome: %s, ", no->dados.nome);
		printf("\nNota 1: %d ", no->dados.n1);
		printf("\nNota 2: %d ", no->dados.n2);
		printf("\nNota 3: %d ", no->dados.n3);
		printf("\n=====================\n");
  		no = no->prox;
		i++;
	}

}










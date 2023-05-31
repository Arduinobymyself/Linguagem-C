#include <stdlib.h>
#include <stdio.h>
#include "ListaDinamicaEncadeada.h"

struct elemento{
	struct aluno dados;     // campo de dados do n� do tipo aluno (struct)
	struct elemento* prox;  // campo de ponteiro do n� (pr�ximo elemento da lista)
};

typedef struct elemento Elemento; // um elemento da lista um n�



// ===== implementa��o das fun��es ===== //
Lista* cria_lista(){
	Lista* li = (Lista*)malloc(sizeof(Lista)); // reserva mem�ria para o primeiro elemnto (n�) da lista
	if(li != NULL) *li = NULL; // inicia com NULL, aponta pra NULL, lista vazia
	return li; // retorna o endere�o da lista
}

void libera_lista(Lista* li){
	if(li != NULL){
		Elemento* no; // ponteiro para o elemento (n�)
		while((*li) != NULL){// enquanto n�o chegar em NULL
			no = *li; // n� igual ao inicio da lista
			*li = (*li)->prox; // inicio da lista aponta pra o pr�ximo n�
			free(no);// libera espa�o da posi��o do n�
		}
		free(li); // libera inicio da lista
	}
}

int tamanho_lista(Lista* li){
	if(li == NULL) return 0;
	int cont = 0;
	Elemento* no = *li; // n� auxiliar para n�o perder o in�cio da lista
	while(no != NULL){ // enquanto n�o chegar no final da lista (NULL)
		cont++; // incrementa contagem de n�s
		no = no->prox; // pr�ximo n�
	}
	return cont;
}

int lista_cheia(Lista* li){
	return 0; // n�o existe o conceito de cheia
}


int lista_vazia(Lista* li){
	if(li == NULL) return 1;
	if(*li == NULL) return 1; // se o head da lista � NULL
	return 0;
}


int insere_inicio(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento)); // novo elemento da lista (n�)
	if(no == NULL) return 0; // n�o consegue alocar
	no->dados = al;   // insere od dados do n�
	no->prox = (*li); // aponta para onde o head da lista estava apontando
	*li = no;         // in�cio da lista passa a ser o novo n�
	return 1;
}


int insere_final(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento)); // aloca mem�ria para o novo n�
	if(no == NULL) return 0;
	no->dados = al; // insere os dados do n�
	no->prox = NULL; // aponta para null, inserindo no final da lista
	if((*li) == NULL){ // se lista vazia: insere no in�cio
		*li = no; // head d lista aponta para o novo n�
	} else { // se n�o for lista vazia e
		Elemento* aux = *li; // cria n� auxiliar e aponta o head da lista
		while(aux->prox != NULL){ // percorre at� achar o final NULL
			aux = aux->prox; // pr�ximo n�
		}
		aux->prox = no; // aux aponta para o novo n�
	}
	return 1;
}

int insere_ordenada(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	Elemento* no = (Elemento*) malloc(sizeof(Elemento)); // cria o novo n�
	if(no == NULL) return 0;
	if(lista_vazia(li)){ // lista vazia? insere no in�cio
		no->prox = (*li); // aponta para o head
		*li = no; // head aponta para o n�
		return 1;
	} else { // procura onde inserir
		Elemento *ant, *atual = *li;
		while(atual != NULL && atual->dados.matricula < al.matricula){ // percorre a lista
			ant = atual; // anterior passa a ser o atual
			atual = atual->prox; // atual passa a ser o pr�ximo
		}
		if(atual == *li){ // � o in�cio da lista?
			no->prox = (*li); // aponta para a cabe�a da lista
			*li = no; // in�cio da lista aponta para o novo n�
		} else { // insere ap�s um n� anterior (no meio ou no final)
			no->prox = ant->prox; // novo n� aponta para onde o n� anterior apontava
			ant->prox = no; // o n� anterior aponta para o novo n�
		}
		return 1;
	}
}


int remove_inicio(Lista* li){
	if(li == NULL) return 0;
	if((*li) == NULL) return 0; // lista vazia
	Elemento* no = *li; // n� auxiliar  para in�cio da lista cabe�a
	*li = no->prox; // in�cio aponta para o elemento seguinte
	free(no); // libera o n�
	return 1;
}

int remove_final(Lista* li){
	if(li == NULL) return 0;
	if((*li) == NULL) return 0; // lista vazia
	Elemento *ant, *no = *li; // auxiliares, n� = in�co da lista
	while(no->prox != NULL){ // percorre a lista at� NULL
		ant = no; // anterior recebe o n�
		no = no->prox; // n� recebe o pr�ximo elemento
	}
	if(no == (*li)) *li = no->prox; // n� igual ao in�cio da lista, remover o primeiro?
	else ant->prox = no->prox; // anterior ir� apontar para onde apontava o n�
	free(no); // libera o n�
	return 1;
}

int remove_meio(Lista* li, int mat){
	if(li == NULL) return 0;
	Elemento *ant, *no = *li;
	while(no != NULL && no->dados.matricula != mat){ // procura at� achar na lista
		ant = no; // anterior aponta para onde apontava o n�
		no = no->prox; // n� aponta para o pr�ximo
	}
	if(no == NULL) return 0; // n�o encontrado
	if(no == *li) *li = no->prox; // remover o primeiro? cabe�a da lista aponta pra o pr�ximo
	else ant->prox = no->prox; // anterior aponta para onde o n� apontava
	free(no); // libera o n�
	return 1;
}

int consulta_posicao(Lista* li, int pos, struct aluno* al){
	if(li == NULL || pos <= 0) return 0;
	Elemento* no = *li; // ponteiro auxiliar apontando para o in�cio da lista
	int i = 1;
	while(no != NULL && i < pos){ // percorre a lista
		no = no->prox; // anda para o pr�ximo elemento
		i++;
	}
	if(no == NULL) return 0; // n�o encontrado... lista vazia
	else {
		*al = no->dados; // recebe o conteudo achado
		return 1;
	}
}

int consulta_matricula(Lista* li, int mat, struct aluno* al){
	if(li == NULL) return 0;
	Elemento* no = *li; // ponteiro auxiliar apontando para o in�cio da lista
	while(no != NULL && no->dados.matricula != mat){ // percorre a lista
		no = no->prox; // anda para o pr�ximo elemento
	}
	if(no == NULL) return 0; // n�o encontrado... lista vazia
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










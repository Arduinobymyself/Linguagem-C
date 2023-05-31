#include <stdlib.h>
#include <stdio.h>
#include "ListaSequencial.h"
// tipo de dados
// implementar as funções



struct lista{
	int qtde;
	struct aluno dados[MAX];
};

Lista* cria_lista(){
	Lista *li;
	li = (Lista*)malloc(sizeof(struct lista));
	if(li != NULL) li->qtde = 0; // quantidade é igual ao tamnho da lista
	return li;
}

int lista_cheia(Lista* li){
	if(li == NULL) return -1;
	return (li->qtde == MAX); // se quantidade = MAX então lista cheia
}

int lista_vazia(Lista* li){
	if(li == NULL) return -1;
	return (li->qtde == 0);
}

void libera_lista(Lista* li){
	free(li);
}

int tamanho_lista(Lista* li){
	if(li == NULL) return -1;
	else return li->qtde;
}

int insere_final(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;
	li->dados[li->qtde] = al; // inserção
	li->qtde++;
	return 1;
}

int insere_inicio(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;	
	int i;
	for(i=li->qtde-1; i>=0; i--) li->dados[i+1] = li->dados[i]; // deslocamento pra frente
	li->dados[0] = al; // inserção
	li->qtde++;
	return 1;
}

int insere_ordenada(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;
	int i = 0, j;
	while(i<li->qtde && li->dados[i].matricula < al.matricula) i++; // faz o search
	for(j=li->qtde-1; j>=i; j--) li->dados[j+1] = li->dados[j]; // deslocamento pra frente
	li->dados[i] = al; // inserção
	li->qtde++;
	return 1;
}

int remove_final(Lista* li){
	if(li == NULL) return 0;
	if(li->qtde == 0) return 0;
	li->qtde--; // só diminui
	return 1;
}

int remove_inicio(Lista* li){
	if(li == NULL) return 0;
	if(li->qtde == 0) return 0;
	int k = 0;
	for(k=0; k<li->qtde-1; k++) li->dados[k] = li->dados[k+1]; // desloca pra tras
	li->qtde--;
	return 1;
}


int remove_ordenada(Lista* li, int mat){
	if(li == NULL) return 0;
	if(li->qtde == 0) return 0;	
	int k, i = 0;
	while(i < li->qtde && li->dados[i].matricula != mat) i++; // busca
	if(i == li->qtde) return 0; // elemento não encontrado
	for(k = i; k < li->qtde - 1; k++) li->dados[k] = li->dados[k+1]; // desloca
	li->qtde--;
	return 1;
}


int consulta_posicao(Lista* li, int pos, struct aluno* al){
	if(li == NULL || pos <= 0 || pos > li->qtde) return 0;
	*al = li->dados[pos-1]; // pega a informação da posição (index = pos-1)
	return 1;
}

int consulta_matricula(Lista* li, int mat, struct aluno* al){
	if(li == NULL) return 0;
	int k, i=0;
	while(i<li->qtde && li->dados[i].matricula != mat) i++; // busca
	if(i == li->qtde) return 0; // elemento não encontrado
	*al = li->dados[i]; // mostra informação na posição
	return 1;
}


void imprime(Lista* li){
	int i;
	for(i=0; i <li->qtde; i++){
		printf("\n===== Aluno #%d =====", i+1);
		printf("\nMatricula: %d, ", li->dados[i].matricula);
		printf("\nNome: %s, ", li->dados[i].nome);
		printf("\nNota 1: %d ", li->dados[i].n1);
		printf("\nNota 2: %d ", li->dados[i].n2);
		printf("\nNota 3: %d ", li->dados[i].n3);
		printf("\n=====================\n");

	}

}


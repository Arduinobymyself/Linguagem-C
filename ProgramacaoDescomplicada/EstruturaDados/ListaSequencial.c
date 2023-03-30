#include <stdlib.h>
#include <stdio.h>
#include "ListaSequencial.h"

struct lista{
	int qtde;
	struct aluno dados[MAX];
};



Lista* cria_lista(){
	Lista *li;
	li = (Lista*)malloc(sizeof(struct lista));
	if(li != NULL) li->qtde = 0;
	return li;
}



int lista_cheia(Lista* li){
	if(li == NULL) return -1;
	return (li->qtde == MAX);
}

int lista_vazia(Lista* li){
	if(li == NULL) return -1;
	return (li->qtde == 0);
}

void libera_lista(Lista* li){
	free(li);
}

void imprime(Lista* li){

	printf("%d, ", li->dados->matricula);
	printf("%s, ", li->dados->nome);
	printf("\n");

}

int tamanho_lista(Lista* li){
	if(li == NULL) return -1;
	else return li->qtde;
}

int insere_final(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;
	li->dados[li->qtde] = al;
	li->qtde++;
	return 1;
}

int insere_inicio(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;	
	int i;
	for(i=li->qtde-1; i>=0; i--) li->dados[i+1] = li->dados[i];
	li->dados[0] = al;
	li->qtde++;
	return 1;
}

int insere_ordenada(Lista* li, struct aluno al){
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;
	int i = 0, j;
	while(i<li->qtde && li->dados[i].matricula < al.matricula) i++;
	for(j=li->qtde-1; j>=i; j--) li->dados[j+1] = li->dados[j];
	li->dados[i] = al;
	li->qtde++;
	return 1;
}

int remove_final(Lista* li){
	if(li == NULL) return 0;
	if(li->qtde == 0) return 0;
	li->qtde--;
	return 1;
}

int remove_inicio(Lista* li){
	if(li == NULL) return 0;
	if(li->qtde == 0) return 0;
	int k = 0;
	for(k=0; k<li->qtde-1; k++) li->dados[k] = li->dados[k+1];
	li->qtde--;
	return 1;
}


int remove_ordenada(Lista* li, int mat){
	if(li == NULL) return 0;
	if(li->qtde == 0) return 0;	
	int k, i = 0;
	while(i<li->qtde && li->dados[i].matricula != mat) i++;
	if(i == li->qtde) return 0;
	for(k=i; k<li->qtde-1; k++) li->dados[k] = li->dados[k+1];
	li->qtde--;
	return 1;
}


int consulta_posicao(Lista* li, int pos, struct aluno* al){
	if(li == NULL || pos <= 0 || pos > li->qtde) return 0;
	*al = li->dados[pos-1];
	return 1;
}

int consulta_matricula(Lista* li, int mat, struct aluno* al){
	if(li == NULL) return 0;
	int k, i=0;
	while(i<li->qtde && li->dados[i].matricula != mat) i++;
	if(i == li->qtde) return 0;
	*al = li->dados[i];
	return 1;
}


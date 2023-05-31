

struct aluno {
	int matricula;
	char nome[30];
	float n1, n2, n3;
};

typedef struct elemento* Lista;

// ===== prot�tipo das fun��es ===== //
Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int insere_inicio(Lista* li, struct aluno al);
int insere_final(Lista* li, struct aluno al);
int insere_ordenada(Lista* li, struct aluno al);



void imprime(Lista* li);



struct aluno{
	int id;
	int matricula;
	char nome[30];
	float n1, n2, n3;
}; // estrutura de dados

typedef struct elemento* Lista; // ponteiro para a lista


// ===== protóritpo das funções ===== //

Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int insere_inicio(Lista* li, struct aluno al);
int insere_final(Lista* li, struct aluno al);
int insere_ordenada(Lista* li, struct aluno al);
int remove_inicio(Lista* li);
int remove_final(Lista* li);
int remove_meio(Lista* li, int mat);
int consulta_posicao(Lista* li, int pos, struct aluno* al);
int consulta_matricula(Lista* li, int mat, struct aluno* al);
void imprime(Lista* li);








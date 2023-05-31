// definição da estrutura
// protótipo das funções
// tipo de armazenamento
// tamanho do vetor

#define MAX 100 // tamanho do vetor

struct aluno{
	int matricula;
	char nome[30];
	float n1, n2, n3;
};

typedef struct lista Lista;

Lista* cria_lista();

void libera_lista(Lista* li);

int tamanho_lista(Lista* li);

int lista_cheia(Lista* li);
int lista_vazia(Lista* li);

int insere_final(Lista* li, struct aluno al);
int insere_inicio(Lista* li, struct aluno al);
int insere_ordenada(Lista* li, struct aluno al);

int remove_final(Lista* li);
int remove_inicio(Lista* li);
int remove_ordenada(Lista* li, int mat);

int consulta_posicao(Lista* li, int pos, struct aluno* al);
int consulta_matricula(Lista* li, int mat, struct aluno* al);

void imprime(Lista* li);





/*
Título:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descrição: 		Aulas do curso de Linguagem C ANSI
Observações:

*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "ListaDinamicaEncadeada.h"
//#include <math.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	struct aluno consulta;
	
	struct aluno dados_aluno1;
	struct aluno dados_aluno2;
	struct aluno dados_aluno3;
	struct aluno dados_aluno4;
	struct aluno dados_aluno5;
	struct aluno dados_aluno6;

	dados_aluno1.id = 1;
	dados_aluno1.matricula = 123;
	strcpy(dados_aluno1.nome, "Marcelo");
	
	dados_aluno2.id = 2;
	dados_aluno2.matricula = 456;
	strcpy(dados_aluno2.nome, "Flora");
	
	dados_aluno3.id = 3;
	dados_aluno3.matricula = 789;
	strcpy(dados_aluno3.nome, "Sara");
	
	dados_aluno4.id = 4;
	dados_aluno4.matricula = 234;
	strcpy(dados_aluno4.nome, "Gabriel");
	
	dados_aluno5.id = 5;
	dados_aluno5.matricula = 345;
	strcpy(dados_aluno5.nome, "Augusto");
	
	dados_aluno6.id = 6;
	dados_aluno6.matricula = 567;
	strcpy(dados_aluno6.nome, "Gloria");
	
	
	Lista* li;  	// ponteiro para lista que é um ponteiro para a struct elemento
					// ponteiro para ponteiro, guarda o endereço de um pontiero
	
	li = cria_lista(); // cria lista li
	
	int tamanhoLista = tamanho_lista(li);
	printf("Tamanho da lista = %d\n", tamanhoLista);
	int listaCheia = lista_cheia(li);
	int listaVazia = lista_vazia(li);
	if(listaVazia){
		printf("Lista vazia\n");
	}
	
	
	int insereFinal = insere_final(li, dados_aluno1); // 1 - Marcelo - 123
	if(insereFinal){
		printf("\ninserção bem sucessida!\n\n");
	} else {
		printf("\nfalha na inserção!\n\n");
	}
	
	insere_final(li, dados_aluno3); // 3 - Sara - 789
	insere_final(li, dados_aluno4); // 4 - Gabriel - 234
	insere_inicio(li, dados_aluno5); // 5 - Augusto - 345
	insere_final(li, dados_aluno6); // 6 - Gloria - 567
	insere_inicio(li, dados_aluno2); // 2 - Flora - 456
	
	imprime(li);
	
	int removeFinal = remove_final(li); // 6 - Gloria 567
	if(removeFinal){
		printf("\nremoção bem sucessida!\n\n");
	} else {
		printf("\nfalha na remoção!\n\n");
	}
	
	
	
	int removeMat = remove_meio(li, 123); // tenta remover 1 - Marcelo - 123
	if(removeMat){
		printf("\nremoção bem sucessida!\n\n");
	} else {
		printf("\nfalha na remoção!\n\n");
	}
	
	
	
	int consultaPosicao = consulta_posicao(li, 2, &consulta);
	printf("Nome aluno consultado: %s\n\n", consulta.nome); // 5 - augusto - 345
	int consultaMatricula = consulta_matricula(li, 456, &consulta);
	printf("Nome matricula %d consultada: %s\n\n", consulta.matricula, consulta.nome); // 1 - Flora - 456
	
	
	/*
	int insereOrdenada = insere_ordenada(li, dados_aluno);
	int removeInicio = remove_inicio(li);
	int removeFinal  = remove_final(li);
	int removeMeio = remove_meio(li, 123);
	int consultaPosicao = consulta_posicao(li, 2, dados_aluno);
	int consultaMatricula = consulta_matricula(li, 456, dados_aluno);
	*/
	
	
	
	
	tamanhoLista = tamanho_lista(li);
	printf("Tamanho da lista = %d\n\n", tamanhoLista);
	
	imprime(li);

	printf("\n\n===== FIM ====\n\n");
	
	libera_lista(li); // libera lista li
	
	system("pause");
	return 0;
}

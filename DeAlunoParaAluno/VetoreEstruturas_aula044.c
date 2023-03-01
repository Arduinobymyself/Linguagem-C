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
#include <locale.h>
#include <string.h>

// --- definição de parâmetros --- //

// --- estruturas e variáveis globais --- //
struct horario {
	int horas;
	int minutos;
	int segundos;
};

// --- protóritpo das funções auxiliares --- //

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	// declara uma variável vetor ou matriz com o tipo da estrutura
	struct horario agora[5];
	
	// inicializa os membros da estrutura atribuindo valores para cada vetor
	agora[0].horas = 6;
	agora[0].minutos = 53;
	agora[0].segundos = 35;
	
	agora[1].horas = 7;
	agora[1].minutos = 23;
	agora[1].segundos = 55;
	
	// ou mais simplesmente declara e atribui ao mesmo tempo
	struct horario teste[3] = {
		{11, 23, 34},
		{12, 34, 56},
		{15, 45, 32}
	};
	
	
	
	
	printf("%d:%d:%d\n", agora[1].horas, agora[1].minutos, agora[1].segundos);
	
	int i;
	for(i=0; i<3; i++){
		printf("%d:%d:%d\n", teste[i].horas, teste[i].minutos, teste[i].segundos);
	}

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //



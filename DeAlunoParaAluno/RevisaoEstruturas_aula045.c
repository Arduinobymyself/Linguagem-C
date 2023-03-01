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
struct horario{
	int horas;
	int minutos;
	int segundos;
};

// --- protóritpo das funções auxiliares --- //
void receberHorario(struct horario recebido[3]);
void imprimirHorario(struct horario recebido[3]);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	

	struct horario listaHorarios[3];
	
	receberHorario(listaHorarios);
	imprimirHorario(listaHorarios);
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
void receberHorario(struct horario recebido[3]){
	int i;
	for(i=0; i<3; i++){
		printf("Digite o %dº horário(hh:mm:ss): ", i+1);
		scanf("%d:%d:%d", &recebido[i].horas,
						  &recebido[i].minutos,
						  &recebido[i].segundos);
	}
}
void imprimirHorario(struct horario recebido[3]){
	int i;
	for(i=0; i<3; i++){
		printf("O %dº horário é = %d:%d:%d\n", i+1,
						  	recebido[i].horas,
						  	recebido[i].minutos,
						  	recebido[i].segundos
		);
	}	
	
}


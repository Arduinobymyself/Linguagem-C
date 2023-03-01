/*
T�tulo:
Autor: 			Eng. Marcelo Moraes
Local: 			Sorocaba - SP
Data: 			Fevereiro 2023
Descri��o: 		Aulas do curso de Linguagem C ANSI
Observa��es:

*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// --- defini��o de par�metros --- //

// --- estruturas e vari�veis globais --- //
struct horario {
	int horas;
	int minutos;
	int segundos;
};

// --- prot�ritpo das fun��es auxiliares --- //
struct horario funcaoTesteEstrutura(struct horario hora);

// --- programa principal --- //
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	// cria vari�vel com o tipo da estrutura
	struct horario agora;
	struct horario proxima;
	
	// inicializa os membros da estrutura
	agora.horas = 6;
	agora.minutos = 53;
	agora.segundos = 35;
	
	
	proxima = funcaoTesteEstrutura(agora); // recebe a estrutura da fun��o
	printf("%d:%d:%d\n", proxima.horas, proxima.minutos, proxima.segundos);

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //

struct horario funcaoTesteEstrutura(struct horario hora){ // retorna uma estrutura
	
	// imprime os valores da estrutura recebida
	printf("%d:%d:%d\n", hora.horas, hora.minutos, hora.segundos);
	
	// altera os membros da estrutura
	hora.horas = 10;
	hora.minutos = 45;
	hora.segundos = 23;
	
	
	return hora;// retorna a estrutura
}


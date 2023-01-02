/*
T�tulo:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descri��o: Aulas do curso de Linguagem C ANSI
Observa��es:
	
	FUN��ES - Par�metros das fun��es
	
	Os par�metros permitem ao programador passar informa��es de um trecho de c�digo
	para dentro de uma fun��o.
	Podemos ter v�rios par�tros passados a uma fun��o
	
	tipo_de_retorno nome_da_fun��o(
				tipo1 par�metro1,
				tipo2 par�metro2,
				tipo3 par�metro3,
				tipoN par�metroN,
				);
	
	Cada um dos par�metro tem um TIPO e um NOME_VARI�VEL e s�o separados por v�rgula ","
	int soma(int x, int y); // Ok
	int soma(int x, y);     // ERRADO
	int soma();             // ERRADO
	
	Fun��es podem n�o ter par�metros, basta deixar a lista vazia ou colocar a palavre void no lugar
	int leitura();
	int leitura(void);
	
				
	
	



*/

// --- inclus�o de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- defini��o de par�metros --- //

// --- prot�ritpo das fun��es auxiliares --- //
float leitura();
int le_arquivo(void);
int escreve(int a);

// --- vari�veis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	float y;
	y = leitura(); // ok
	y = leitura(5); // como leitura n�o tem par�metros ele deconsidera qualquer par�meto passado
	y = leitura(5 , 'a'); // como o de cima
	
	int x;
	x = le_arquivo();	// ok n�o deve passar par�metros
	
	x = le_arquivo(5); 	// erro!!! ao passar par�metro cometemos o erro 
	                   	// "too many arguments to function 'le_arquivo'"
	                   	
	y = escreve(1,2,3);	// erro!!! ao n�o passar par�metro cometemos o erro  
						// "too many arguments to function 'le_arquivo'"
	y = escreve();		// e neste caso, "too few arguments to function 'escreve'"
	
	





	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das fun��es auxiliares --- //


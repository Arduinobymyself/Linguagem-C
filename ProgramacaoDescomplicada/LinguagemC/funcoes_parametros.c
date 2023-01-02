/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Dezembro de 2022
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	
	FUNÇÕES - Parâmetros das funções
	
	Os parâmetros permitem ao programador passar informações de um trecho de código
	para dentro de uma função.
	Podemos ter vários parâtros passados a uma função
	
	tipo_de_retorno nome_da_função(
				tipo1 parâmetro1,
				tipo2 parâmetro2,
				tipo3 parâmetro3,
				tipoN parâmetroN,
				);
	
	Cada um dos parâmetro tem um TIPO e um NOME_VARIÁVEL e são separados por vírgula ","
	int soma(int x, int y); // Ok
	int soma(int x, y);     // ERRADO
	int soma();             // ERRADO
	
	Funções podem não ter parâmetros, basta deixar a lista vazia ou colocar a palavre void no lugar
	int leitura();
	int leitura(void);
	
				
	
	



*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
float leitura();
int le_arquivo(void);
int escreve(int a);

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	float y;
	y = leitura(); // ok
	y = leitura(5); // como leitura não tem parâmetros ele deconsidera qualquer parâmeto passado
	y = leitura(5 , 'a'); // como o de cima
	
	int x;
	x = le_arquivo();	// ok não deve passar parâmetros
	
	x = le_arquivo(5); 	// erro!!! ao passar parâmetro cometemos o erro 
	                   	// "too many arguments to function 'le_arquivo'"
	                   	
	y = escreve(1,2,3);	// erro!!! ao não passar parâmetro cometemos o erro  
						// "too many arguments to function 'le_arquivo'"
	y = escreve();		// e neste caso, "too few arguments to function 'escreve'"
	
	





	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //


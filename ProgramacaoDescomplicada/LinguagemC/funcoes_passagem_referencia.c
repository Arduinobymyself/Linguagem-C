/*
Título:
Autor: Eng. Marcelo Moraes
Local: Sorocaba - SP
Data: Janeiro 2023
Descrição: Aulas do curso de Linguagem C ANSI
Observações:
	aula048 - Funções - Passagem por referência
	
	Passagem por referência: o endereço de onde o dado 
	está armazenado na memória é passado para a função.
	Assim, a função pode modificar o valor do parâmetro.
	
	Exemplo:
	Função scanf();
	
	int x = 5;
	printf("\nAnted do scanf, x vale %d\n", x); // 5 definido pelo programador
	printf("\nDigite um múmero: ");
	scanf("%d", &x);
	printf("\nDepois do scanf, x vale %d\n", x); // valor digitado pelo usuário
	
	Parâmetro por referência: usa-se o operador "*" na frente do nome
	do parâmetro durante a declaração da função.
	Ex:
	void soma_mais_um(int n); // passagem padrão por valor
	void soma_mais_um(int *n); // passagem por referência
	
	Toda vez que a variável for usada, o operador "*"
	deverá ser usado na frente do nome da variável.
	void soma_mais_um(int *n){
		*n = *n + 1;
	}
	
	Parâmetro por referência: na chamada da função 
	é necessário utilizar o operador "&" na frente do nome da variável
	que será passada por referência.
	Ex:
	int x;
	printf("\nAnted do scanf, x vale %d\n", x);
	soma_mais_um(&x);
	printf("\nDepois do scanf, x vale %d\n", x);
	


*/

// --- inclusão de bibliotecas --- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// --- definição de parâmetros --- //

// --- protóritpo das funções auxiliares --- //
void soma_mais_um(int *n);

// --- variáveis globais --- //

// --- programa principal --- //
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	/*
	// Exemplo com scanf() para passagem por referência
	int x = 5;
	printf("\nAnted do scanf, x vale %d\n", x); // 5 definido pelo programador
	printf("\nDigite um múmero: ");
	scanf("%d", &x); // "x" é passado por referência ou seja foi passado o endereço de memória de "x" 
	printf("\nDepois do scanf, x vale %d\n", x); // valor digitado pelo usuário
	*/
	
	// exemplo usando a função soma_mais_um();
	int x = 5;
	printf("\nAntes da função ser chamada, x vale %d", x); // 5
	soma_mais_um(&x); // passa o endereço de memória de "x"
	printf("\nDepois da função ser chamada, x vale %d", x); // 6
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

// --- desenvolvimento das funções auxiliares --- //
void soma_mais_um(int *n){ // o valor de memória de "x" passado a "n"
	*n = *n + 1; // o valor armazenado no endereço de memória n é somado em 1
	printf("\nDentro da função, x vale %d", *n); // 6
}

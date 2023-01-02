#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 009 - laço For e laço For aninhado
	
	for(inicilaização; condiçaõ; incremento){
		//bloco de comandos;
	{
	
	

	
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i, j;
	
	// imprime 1 a 10 ordem crescente
	for(i = 1; i <= 10; i++){
		printf("%d ", i);	
	}
	
	// imprime 1 a 10 ordem decrescente
	printf("\n\n");
	for(i = 10; i > 0; i--){
		printf("%d ", i);	
	}
	
	// imprime linhas 1 a 3 e colunas 1 a 3
	printf("\n\n");
	for(i = 1; i <= 3; i++){
		printf("\nLinha %d ", i);
		for(j = 1; j <= 3; j++){
			printf(" Coluna %d", j);
		}
	}
	
	
	
	
	printf("\n\n");
	//system("pause");
	return 0;
}

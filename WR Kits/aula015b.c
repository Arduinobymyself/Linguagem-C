#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*
	aula 015 - Exemplo: M�quina de Codifica��o
*/

void codifica();


int main(){
	setlocale(LC_ALL, "Portuguese");

	printf("\n=== M�QUINA DE CODIFICA��O ===");
	printf("\nDigite $ para sair.");
	printf("\nEntre com as letras para codificar: \n");

	codifica();

	printf("\n\n");
	//system("pause");
	return 0;
}

void codifica(){
	char ok = 0, ch;
	
	while(!ok){
		ch = getche();
		if(ch == '$'){
			ok = 1;
			continue;
		}
		printf("%c", ch + 3);
	}
	printf("\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*
	aula 013 - Jogo da soma, declaração goto
	
	label:
		comandos;
		comandos;
		comandos;
		.
		.
		.
	goto label;
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i = 0, j = 1, resultado;
	int erros = 0, acertos = 0;
	char opcao;
	
	inicio:
		for(j = 1; j < 10; j++){
			
			printf("\nQual é a resposta %d + %d?", i, j);
			scanf("%d", &resultado);
			getchar();
			
			if(resultado != (i + j)){
				printf("\nResposta Errada!\n");
				erros++;
			} else {
				printf("\nResposta Correta!\n");
				acertos++;
			}
			
		}
		printf("\nAcertos = %d", acertos);
		printf("\nErros = %d", erros);
		
	meio:
		printf("\nContinuar respondendo? s - sim, n - não ");
		opcao = toupper(getche());
		getchar();
		printf("\n");
		
		switch(opcao){
			case 'S':
				goto inicio;
				break;
			case 'N':
				goto fim;
				break;
			default:
				printf("\nOpção Inválida!");
				goto meio;
				break;
		}
	fim:
		
	


	printf("\n\n");
	//system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	 aula 4.3 - conhecendo o comando switch()
	 estrutura de decisão multipla
	 
	 switch(variável){
	 	case valor1:
	 		bloco de comandos;
	 		break;
	 	case valor1:
	 		bloco de comandos;
	 		break;
	 		.
	 		.
	 		.
	 	case valorN:
	 		bloco de comandos;
	 		break;
	 	case default:
	 		bloco de comandos;
	 		break;
	}
	 		
	 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	int opcao;
	printf("\nInsira um valor de 1 a 7: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nDomingo.\n");
			break;
		case 2:
			printf("\nSegunda.\n");
			break;
		case 3:
			printf("\nTerça.\n");
			break;
		case 4:
			printf("\nQuarta.\n");
			break;
		case 5:
			printf("\nQuinta.\n");
			break;
		case 6:
			printf("\nSexta.\n");
			break;
		case 7:
			printf("\nSábado.\n");
			break;
		default:
			printf("\nOpção Inválida!\n");
			break;
	}
	
	

	printf("\n\n");
	//system("pause");
	return 0;
}

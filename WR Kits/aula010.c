#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula 010 - declara��o Switch - Case
	
	switch(vari�vel){
		case constante1:
			comandos;
			break;
		case constante2:
			comandos;
			break;
		.
		.
		.
		default:
			comandos;
			break;
	}
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int opcao, valor;
	
	printf("\n==== CONVERSOR DE BASES NUM�RICAS ====\n");
	printf("1 - Decimal para Hexadecimal\n");
	printf("2 - Hexadecimal para Decimal\n");
	printf("\n\nInforme a op��o: ");
	scanf("%d", &opcao);
	getchar();
	
	
	switch(opcao){
		case 1:
			printf("\nInformar o valor em Decimal: ");
			scanf("%d", &valor);
			getchar();
			printf("\n%d em Hexadecimal = %x\n", valor, valor);
			break;
		case 2:
			printf("\nInformar o valor em Hexadecimal: ");
			scanf("%x", &valor);
			getchar();
			printf("\n%x em Decimal = %d\n", valor, valor);
			break;
		default:
			printf("\nOp��o Inv�lida!");
			break;
	}
	


	printf("\n\n");
	//system("pause");
	return 0;
}

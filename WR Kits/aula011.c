#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*
	aula 011 - Banco de Dados (Projeto 02)
	
	Sistema de banco de dados simples
	Seleciona vendedores por regi�o
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	char regiao, vendedor;
	printf("\nRegi�es: Leste Oeste e Nordeste\n");
	printf("\nInforme a primeira letra da regi�o: ");
	regiao = getche();
	regiao = toupper(regiao);
	printf("\n\n");
	
	
	switch(regiao){
		case 'L':
			printf("\nVendedores: Ricardo, Jos� e Mariana\n");
			printf("\nInforme a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n\n");
			switch(vendedor){
				case 'R':
					printf("\nVendas: R$%d\n", 5000);
					break;
				case 'J':
					printf("\nVendas: R$%d\n", 6000);
					break;
				case 'M':
					printf("\nVendas: R$%d\n", 8000);
					break;
				default:
					printf("\nOp��o Inv�lida!");
					break;
			}
			break;
		case 'O':
			printf("\nVendedores: Rafael, Joana e Pedro\n");
			printf("\nInforme a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n\n");
			switch(vendedor){
				case 'R':
					printf("\nVendas: R$%d\n", 7000);
					break;
				case 'J':
					printf("\nVendas: R$%d\n", 9000);
					break;
				case 'P':
					printf("\nVendas: R$%d\n", 4000);
					break;
				default:
					printf("\nOp��o Inv�lida!");
					break;
			}
			break;
		case 'N':
			printf("\nVendedores: Fabiana, Gabriela e Roberto\n");
			printf("\nInforme a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n\n");
			switch(vendedor){
				case 'F':
					printf("\nVendas: R$%d\n", 3000);
					break;
				case 'G':
					printf("\nVendas: R$%d\n", 7000);
					break;
				case 'R':
					printf("\nVendas: R$%d\n", 9000);
					break;
				default:
					printf("\nOp��o Inv�lida!");
					break;
			}
			break;
		default:
			printf("\nOp��o Inv�lida!\n");
			break;
	}
	
	
	



	printf("\n\n");
	//system("pause");
	return 0;
}

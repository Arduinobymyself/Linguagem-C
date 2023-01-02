#include <stdio.h>
#include <stdlib.h>

/*
	aula 008 - conversor de bases numéricas (projeto 01)
*/

int main(){
	
	int opcao, valor;
	
	printf("\n==== CONVERSOR DE BASES NUMERICAS ====\n");
	printf("1 - decimal para hexadecimal\n");
	printf("2 - hexadecimal para decimal\n");
	printf("\n\nInforme a opcao: ");
	scanf("%d", &opcao);
	getchar();
	
	if(opcao == 1){
		printf("\nInformar o valor em decimal: ");
		scanf("%d", &valor);
		getchar();
		printf("\n%d em hexadecimal = %x\n", valor, valor);
	} else if(opcao == 2){
		printf("\nInformar o valor em hexadecimal: ");
		scanf("%x", &valor);
		getchar();
		printf("\n%x em decimal = %d\n", valor, valor);
	} else {
		printf("\nOpcao Invalida!\n");
	}
	
	
	
	
	//system("pause");
	return 0;
}

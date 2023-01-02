#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
/*
	aula029 - estrutura de dados - struct
	
	struct nome_da_struct{
		tipo vari�vel1;
		tipo vari�vel2;
		.
		.
		.
		tipo vari�velN;		
	}nome_da_variavel;
	
	ou
	
	struct nome_da_struct nome_da_vari�vel;
	
*/

struct componente {
	char tipo[20];
	char referencia[4];
	unsigned char num_ref;
	int valor;
	char unidade[10];
};

struct componente comp;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	printf("=== CRIANDO COMPONENTE ===\n");
	printf("\nTipo de componente: ___________: ");
	fgets(comp.tipo, 20, stdin);
	fflush(stdin);
	
	printf("\nRefer�ncia do componente: ___: ");
	fgets(comp.referencia, 4, stdin);
	fflush(stdin);
	
	printf("\nN�mero da refer�ncia: _______: ");
	scanf("%c", &comp.num_ref);
	getchar();
	
	printf("\nValor do componente: ________: ");
	scanf("%d", &comp.valor);
	getchar();
	
	printf("\nUnidade: ____________________: ");
	fgets(comp.unidade, 10, stdin);
	fflush(stdin);
	
	printf("\n\n=== COMPONENTE CRIADO ===\n\n");
	printf("%s\n", comp.tipo);
	printf("%s", comp.referencia);
	printf("%c", comp.num_ref);
	printf("\nValor: %d ", comp.valor);
	printf(" %s\n\n", comp.unidade);




	printf("\n\n");
	//system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula030 - atribuição e matrizes com estruturas
*/

struct minha_estrutura{
	int numero_inteiro;
	double numero_double;
}exemplo1, exemplo2;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	exemplo1.numero_inteiro = 100; // atribuindo um valor a um elemento da struct
	exemplo2 = exemplo1; // atribuindo uma struct a aoutra
	exemplo2.numero_double = 75.345322;
	exemplo1 = exemplo2;
	printf("%d ",  exemplo2.numero_inteiro); // imprime o valor 100
	printf("%.2f ",  exemplo1.numero_double); // imprime o valor 75.35


	printf("\n\n");
	//system("pause");
	return 0;
}

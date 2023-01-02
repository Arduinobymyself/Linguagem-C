#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ponteiros como argumentos para fun��es
	prot�tipo: void function(int *p1, int *p2);
	na chamda: function(&p1, &p2);
	
*/

void change(int *x, int *y);

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int n1, n2;
	printf("\nDigite um n�mero ");
	scanf("%d", &n1);
	getchar();
	printf("\nDigite outro n�mero ");
	scanf("%d", &n2);
	getchar();
	
	printf("\nOsvalores inicias s�o: n1 = %d e n2 = %d", n1, n2);
	change(&n1, &n2);
	printf("\nOsvalores invertidos s�o: n1 = %d e n2 = %d", n1, n2);
	


	printf("\n\n");
	//system("pause");
	return 0;
}

void change(int *x, int *y){
	int temp;
	temp = *x; // salvando o conte�do armazenado no endere�o apontado por x
	*x = *y;   // armazena o conte�do de y em x
	*y = temp; // armazena o conte�do original de x em y
}

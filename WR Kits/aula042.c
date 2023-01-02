#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ponteiros como argumentos para funções
	protótipo: void function(int *p1, int *p2);
	na chamda: function(&p1, &p2);
	
*/

void change(int *x, int *y);

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	int n1, n2;
	printf("\nDigite um número ");
	scanf("%d", &n1);
	getchar();
	printf("\nDigite outro número ");
	scanf("%d", &n2);
	getchar();
	
	printf("\nOsvalores inicias são: n1 = %d e n2 = %d", n1, n2);
	change(&n1, &n2);
	printf("\nOsvalores invertidos são: n1 = %d e n2 = %d", n1, n2);
	


	printf("\n\n");
	//system("pause");
	return 0;
}

void change(int *x, int *y){
	int temp;
	temp = *x; // salvando o conteúdo armazenado no endereço apontado por x
	*x = *y;   // armazena o conteúdo de y em x
	*y = temp; // armazena o conteúdo original de x em y
}

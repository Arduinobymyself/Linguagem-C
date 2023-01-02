#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula031 - passando estruturas para funções
*/


/*
struct estrutura1{
	int a;
	int b;
	char c;
	float d;
	cahr s[10];
}var;

int funcao1(&var.a);
int funcao2(&var.b);
int funcao3(&var.s[10]);
*/


struct estrutura1{
	int a, b;
	char c;
}var1;

void imprimir(struct estrutura1 parametro){
	printf("a = %d, ", parametro.a);
	printf("b = %d, ", parametro.b);
	printf("e c = %c", parametro.c);
}



int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");
	
	
	struct estrutura1 argumento;
	argumento.a = 1200;
	argumento.b = 25;
	argumento.c = 'F';
	imprimir(argumento);
	


	printf("\n\n");
	//system("pause");
	return 0;
}

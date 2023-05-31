#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
	Gerador de cabechalho
*/

void header(int n, char c, char *str);

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");

	header(40, '*', "Curso de Linguagem C");


	printf("\n\n");
	//system("pause");
	return 0;
}




void header(int n, char c, char *str){
	int i;
	
	for(i = 0; i < n-1; i++){
		printf("%c", c);
	}
	printf("\n");
	
	//printf("%c", c);
	for(i = 0; i < (n -strlen(str))/2-1; i++){
		printf(" ");
	}
	printf("%s", str);
	for(i = 0; i < (n -strlen(str))/2-1; i++){
		printf(" ");
	}
	//printf("%c\n", c);
	printf("\n");
	for(i = 0; i < n-1; i++){
		printf("%c", c);
	}
	
}

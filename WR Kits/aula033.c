#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula033 - unions
	ocupam menos espaço em memória
	
	
*/

union estrutura1{
	int numero1;
	char letra1;
	float decimal1;
};

struct estrutura2{
	int numero2;
	char letra2;
	float decimal2;
};



int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n\n");


	printf("Union: %d Bytes\n", sizeof(union estrutura1)); // 4 Bytes
	printf("Estruct: %d Bytes\n: ", sizeof(struct estrutura2)); // 12 Bytes


	printf("\n\n");
	//system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	aula023 - indexação de ponteiros
	
*/

#define tam	10

int main(){
	setlocale(LC_ALL, "Portuguese");

	int matriz[tam] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p, i;
	
	p = matriz; // p recebe o endereço de memória do primeiro elemento da matriz
	
	for(i = 0; i < tam; i++){
		printf("%d ", *(p+i)); // imprime o valor armazenada no endereço apontado por p+i
	}



	printf("\n\n");
	//system("pause");
	return 0;
}

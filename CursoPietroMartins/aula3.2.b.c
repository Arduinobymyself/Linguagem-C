#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n\n");
	
	
	int dado = 10;
	printf("\nDado antes do incremento: %d.\n", dado); // 10
	
	dado++;
	printf("\nDado ap�s o incremento: %d.\n", dado); // 11
	
	dado--;
	printf("\nDado ap�s o decremento: %d.\n", dado); // 10
	
	dado+=3;
	printf("\nDado ap�s o incremento em 3 unidades: %d.\n", dado); // 13
	
	dado-=2;
	printf("\nDado ap�s o decremento: %d.\n", dado); // 11
	
	dado*=10;
	printf("\nDado ap�s multiplicar por 10: %d.\n", dado); // 110
	
	dado/=2;
	printf("\nDado ap�s divis�o por 2: %d.\n", dado); // 55
	
	


	printf("\n\n");
	//system("pause");
	return 0;
}

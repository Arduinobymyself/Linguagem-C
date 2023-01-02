#include <stdio.h>
#include <stdlib.h>

/*
	aula 006 - operadores de assinalamento, incremento e decremento
*/

int main(){
	
	int a = 0, b = 0, c = 0, d= 0;
	
	a++; // a = 1
	b--; // b = -1
	c = 1; // c = 1
	c += a; // c = 2
	d -= c; // d = -2
	
	printf("\na = %d \nb = %d \nc = %d \nd = %d.\n", a, b, c, d);
	
	
	
	
	
	system("pause");
	return 0;
}

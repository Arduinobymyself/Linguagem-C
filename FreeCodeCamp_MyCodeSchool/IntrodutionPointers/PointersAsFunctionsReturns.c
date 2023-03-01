#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld(){
	printf("Hello World!\n");
}

int* Add(int* a, int* b){
	int* c = (int*)malloc(sizeof(int)); // aloca na HEAP
	*c = (*a) + (*b);
	//int c = (*a) + (*b); // aloca na STACK
	return c; // &c;
}

int main(){
	int a = 2, b = 4;
	int* ptr = Add(&a, &b);
	PrintHelloWorld(); // se usado com a informa��o alocada na STACK ocorrer� erro,
					   // pois ap�s terminar a fun��o a area de mem�ria ser� limpa
					   // j� quando alocado na HEAP, permanecer� at� ser liberada
	printf("Sum = %d\n", *ptr);
	
}

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
	PrintHelloWorld(); // se usado com a informação alocada na STACK ocorrerá erro,
					   // pois após terminar a função a area de memória será limpa
					   // já quando alocado na HEAP, permanecerá até ser liberada
	printf("Sum = %d\n", *ptr);
	
}

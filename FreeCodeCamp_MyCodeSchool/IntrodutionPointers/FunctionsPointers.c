#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b){
	return a + b;
}

void PrintHello(char *name){
	printf("Hello %s\n", name);
}

int main(){
	
	/*
	pointer to function that should take (int, int) as argument
	and return int
	*/
	
	int c;
	int (*p)(int, int);
	
	/* 
	int *Function(int, int) will declare a function that would return int*, take care
	must have be (*p)(int, int)
	so it is importante to put (*p)(int, int) to declare a pointer to a function 
	instead declare a funtion that returns a pointer
	*/ 
	
	p = &Add; // or just Add, function name will return us pointer
	
	c = (*p)(2, 3); // de-referencing and executing the function
	// to call the function we can just use p(2,3)
	
	printf("Sum = %d\n", c);
	
	printf("\n====================================\n");
	
	void (*ptr)(char*);
	ptr = PrintHello;
	ptr("Marcelo");
	
	
	return 0;
}

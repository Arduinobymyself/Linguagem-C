#include <stdio.h>
void Increment(int a){
	a += 1;
	printf("Address of variable a in Increment = %d\n", &a);
}

void IncrementByReference(int *p){
	*p = (*p)+1;
}

int main(){
	int a;
	int b;
	
	a = 10;
	b = 10;
	
	Increment(a);
	IncrementByReference(&b);
	
	printf("Address of variable a in main() = %d\n", &a);
	printf("a = %d", a); // why 10 and not 11?
						 // due to call by  value
	printf("\n");
	printf("Address of variable b in IncrementByReference() = %d\n", &b);
	printf("b = %d", b);
	
}

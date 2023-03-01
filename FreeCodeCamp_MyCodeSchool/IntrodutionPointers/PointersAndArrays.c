#include <stdio.h>

int main(){
	
	int i;
	int A[] = {2, 4, 5, 8, 1};
	int *p = A;
	//A++; // invalid statement, compile error
	p++; // valid statement
	/*
	printf("%d\n", A);
	printf("%d\n", &A[0]);
	printf("%d\n", A[0]);
	printf("%d\n", *A);
	*/
	for(i=0; i<5;i++){
		printf("%d\n", &A[i]);
		printf("%d\n", A+i);
		printf("%d\n", A[i]);
		printf("%d\n", *(A+i));
	}
	
	
	return 0;
}

#include <stdio.h>

int SumOfElements(int* A, int size ){ // "int* A" or "int A[]" it's the same
	int i, sum = 0;
	printf("SOE - size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
	for(i = 0; i < size; i++){
		sum += A[i]; // A[i] is *(Ai)
	}
	return sum;
}

void Double(int* A, int size){
	int i;
	for(i = 0; i < size; i++){
		A[i] *= 2;
	}
}

int main(){
	int i;
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A)/ sizeof(A[0]);
	int total = SumOfElements(A, size); // A can be used for &A[0]
	printf("Sum of elements = %d\n", total);
	printf("Main - size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
	
	Double(A, size);
	for(i = 0; i < size; i++){
		printf("%d ", A[i]); // A values are modified by Double() function
	}
	
}

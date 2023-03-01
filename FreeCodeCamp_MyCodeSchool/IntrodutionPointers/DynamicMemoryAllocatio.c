#include <stdio.h>
#include <stdlib.h>

int main(){
	int n , i;
	printf("Enter size of array\n");
	scanf("%d", &n);
	
	//int *A = (int*)malloc(n*sizeof(int));  //dynamically allocated array
	int *A = (int*)calloc(n, sizeof(int));   //dynamically allocated array and zero initialized
	
	for(i = 0; i < n; i++){
		A[i] = i+1;
	}
	
	//free(A); // freing the memory before use will cause problems with data lost, take care
	for (i = 0; i < n; i++){
		printf("%d ", A[i]);
	}
	
	printf("\n==================================\n");
	
	
	int *B = (int*)realloc(A, 2*n*sizeof(int));
	printf("Prev block address = %d, new address = %d\n", A, B);
	for (i = 0; i < 2*n; i++){
		printf("%d ", B[i]);
	}
	
	
	// freing the memory after use
	free(A);
	free(B);
	
	
}

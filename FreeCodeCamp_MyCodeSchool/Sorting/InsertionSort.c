#include <stdio.h>

int InsertionSort(int A[], int n){
	int i, value, hole;
	
	for(i = 0; i < n; i++){
		
		value = A[i];
		hole = i;
		
		while(hole > 0 && A[hole-1] > value){
			
			A[hole] = A[hole-1];
			hole--;
			
		}
		
		A[hole] = value;
		
	}
}




int main(){
	
	int A[] = {2, 7, 4, 1, 5, 3};
	int i, n;
	
	n = sizeof(A)/sizeof(int);
	
	InsertionSort(A, n);
	
	for(i = 0; i < n; i++){
		printf("%d ", A[i]);
	}
	
	
	
	return 0;
}

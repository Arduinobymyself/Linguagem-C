#include <stdio.h>

int SelectionSort(int A[], int n){
	int i, j, temp, iMin;
	for(i = 0; i < n-1; i++){ // we need to do n-2 passes
		iMin = i; // ith position: elements from i till n-1 are candidates
		for(j = i+1; j < n; j++){
			if(A[j] < A[iMin]){
				iMin = j; // updte the index of minimum element
			}
		}
		// swaps positions
		temp = A[i];
		A[i] = A[iMin];
		A[iMin] = temp;
	}
}




int main(){
	
	int A[] = {2, 7, 4, 1, 5, 3};
	int i, n;
	
	n = sizeof(A)/sizeof(int);
	
	SelectionSort(A, n);
	
	for(i = 0; i < n; i++){
		printf("%d ", A[i]);
	}
	
	
	
	return 0;
}

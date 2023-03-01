#include <stdio.h>


void BubbleSort(int *A, int n){
	int i, j, temp;
	for(i = 0; i < n; i++){
		for(j = 0; j < n - 1; j++){
			if(A[j] > A[j + 1]){ // compare A[j] with A[j+1] and SWAP if needed
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}		
	}
}


int main(){
	int i;
	int A[] = {3, 2, 1, 5, 6, 4}; // sort in increasing order => {1, 2, 3, 4, 5, 6}
	BubbleSort(A, 6);
	for(i = 0; i < 6; i++){
		printf("%d ", A[i]);
	}
	
	return 0;
}

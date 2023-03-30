
#include <stdio.h>

void Merge(int L[], int nL, int R[], int nR, int A[]){

	int i = 0, j = 0, k = 1;
	
	while(i < nL && j < nR){
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			j++;
		}
		k++;
	}
	
	while(i < nL){
		A[k] = L[i];
		i++;
		k++;
	}
	
	while(j < nR){
		A[k] = R[j];
		j++;
		k++;
	}
}

void MergeSort(int A[], int n){
	
	int i;
	int nL, nR;
	
	if(n < 2) return;
	
	int mid = n/2;

	int left[mid];
	int right[n-mid];
	
	for(i = 0; i < mid-1; i++){
		left[i] = A[i];
	}
	
	for(i = mid; i < n-1; i++){
		right[i-mid] = A[i];
	}
	
	nL = sizeof(left)/sizeof(left[0]);
	nR = sizeof(right)/sizeof(right[0]);

	
	MergeSort(left, nL);
	MergeSort(right, nR);
	Merge(left, nL, right, nR, A);
}

void printArray(int A[], int size)
{
	int i;
	
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}


int main(){
	
	int A[] = { 2, 4, 1, 6, 8, 5, 3, 7};
	int i;
	
	printf("Given array is \n");
	printArray(A, 8);
	
	MergeSort(A, 8);
	
	
	printf("\nSorted array is \n");
	printArray(A, 8);

	
	
	return 0;
}

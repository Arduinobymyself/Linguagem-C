

#include <stdio.h>


int Partition(int A[], int start, int end){
	
	int pivot, pIndex, i, temp;
	
	pivot = A[end];
	pIndex = start;
	
	for(i = start; i < end; i++){
		if(A[i] <= pivot){
			//Swap(A[i], A[pIndex]);
			temp = A[i];
			A[i] = A[pIndex];
			A[pIndex] = temp;
			pIndex++;
		}
	}
	//Swap(A[pIndex], A[end]);
	temp = A[pIndex];
	A[pIndex] = A[end];
	A[end] = temp;
	return pIndex;
}


void QuickSort(int A[], int start, int end){
	int pIndex = 0;
	if(start < end){
		pIndex = Partition(A, start, end);
		QuickSort(A, start, pIndex-1);
		QuickSort(A, pIndex+1, end);
	}
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
	
	QuickSort(A, 0, 7);
	
	
	printf("\nSorted array is \n");
	printArray(A, 8);
	
	
	return 0;
}

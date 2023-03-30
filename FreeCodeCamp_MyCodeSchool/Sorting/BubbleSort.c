#include <stdio.h>

int BubbleSort(int A[], int n){
	int i, k, temp, flag;
	
	for(k = 1; k < n-1; k++){
		flag = 0;
		for(i = 0; i < n-1; i++){
			if(A[i] >  A[i+1]){
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0) break;
	}
}




int main(){
	
	int A[] = {2, 7, 4, 1, 5, 3};
	int i, n;
	
	n = sizeof(A)/sizeof(int);
	
	BubbleSort(A, n);
	
	for(i = 0; i < n; i++){
		printf("%d ", A[i]);
	}
	
	
	
	return 0;
}

#include <stdio.h>


int BinarySearch(int A[], int n, int x){
	int start = 0;
	int end = n-1;
	int mid = 0;
	
	while(start <= end){
		mid = start+(end-start)/2; // (start+end) may overflow when the array is very large (2^31)
		if(A[mid] == x){
			return mid;// Found x, return (exit)
		} else if(x < A[mid]){
			end = mid-1; // x lies before mid
		} else{
			start = mid+1; // x lies after mid	
		}
	
	}
	return -1;
}




int main(){
	
	int A[] = {2, 6, 13, 21, 36, 47, 63, 81, 97};
	int n, x;
	int result;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	result = BinarySearch(A, 9, x);
	if(result != -1){
		printf("Found %d at index %d.\n", x, result);
	} else{
		printf("%d not found in the array.\n", x);
	}
	
	
	return 0;
}

#include <stdio.h>


int BinarySearch(int A[], int low, int high, int x){

	int mid = 0;

	if(low>high) return -1;
	
	mid = low+(high - low)/2; // (start+end) may overflow when the array is very large (2^31)
	
	if(A[mid] == x){
		return mid;// Found x, return (exit)
	} else if(x < A[mid]){
		return BinarySearch(A, low, mid-1, x); // x lies before mid
	} else{
		return BinarySearch(A, mid+1, high, x); // x lies after mid	
	}
	
	
}




int main(){
	
	int A[] = {2, 6, 13, 21, 36, 47, 63, 81, 97};
	int n, x;
	int result;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	result = BinarySearch(A, 0, 8, x);
	if(result != -1){
		printf("Found %d at index %d.\n", x, result);
	} else{
		printf("%d not found in the array.\n", x);
	}
	
	
	return 0;
}

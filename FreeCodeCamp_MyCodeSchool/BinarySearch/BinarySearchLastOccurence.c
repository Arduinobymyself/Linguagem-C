#include <stdio.h>


int BinarySearch(int A[], int n, int x){
	int low = 0;
	int high = n-1;
	int mid = 0;
	int result = -1;
	
	while(low <= high){
		mid = low+(high-low)/2; // (start+end) may overflow when the array is very large (2^31)
		if(A[mid] == x){
			result = mid;
			low = mid+1; // go on searching towards right (higher indices)
		} else if(x < A[mid]){
			high = mid-1; // x lies before mid
		} else{
			low = mid+1; // x lies after mid	
		}

	}
	return result;
}




int main(){
	
	int A[] = {2, 4, 10, 10, 10, 18, 20};
	int n, x;
	int result;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	result = BinarySearch(A, 6, x);
	if(result != -1){
		printf("Found %d at index %d.\n", x, result);
	} else{
		printf("%d not found in the array.\n", x);
	}
	
	
	return 0;
}

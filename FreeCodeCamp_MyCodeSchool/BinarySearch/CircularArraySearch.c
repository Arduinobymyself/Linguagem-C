#include <stdio.h>

int CircularArraySearch(int A[], int n, int x){
	
	int low = 0, high = n-1;
	
	while(low <= high){
		
		int mid = low + (high - low) / 2;
		
		if(x == A[mid]) return mid; //case 1: found x at middle
		
		if(A[mid] <= A[high])
		{ // case 2: right half is sorted
			if(x > A[mid] && x <= A[high])
				low = mid + 1; // go searching in right sorted half
			else
				high = mid - 1;
		} else 
		{ // case 3: left half is sorted
			if(A[low] <= x && x < A[mid])
				high = mid - 1; // go searching in left sorted half
			else
				low = mid + 1; // go searching right
		}
	}
	return -1;
}





int main(){
	
	int A[] = {12, 14, 18, 21, 3, 6, 8, 9};
	int x;
	printf("enter a number: ");
	scanf("%d", &x);
	int index = CircularArraySearch(A, 8, x);
	if(index == -1)
		printf("%d not found in the array", x);
	else
		printf("%d was found at index %d", x, index);
	
	
	return 0;
}

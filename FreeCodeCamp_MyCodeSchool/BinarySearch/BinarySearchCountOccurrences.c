#include <stdio.h>

#define true 1
#define false 0

int BinarySearch(int A[], int n, int x, int searchFirst){
	int low = 0;
	int high = n-1;
	int mid = 0;
	int result = -1;
	
	while(low <= high){
		mid = low+(high-low)/2; // (start+end) may overflow when the array is very large (2^31)
		if(A[mid] == x){
			result = mid;
			if(searchFirst){
				high = mid-1; // go on searching towards right (higher indices)
				
			} else {
				low = mid+1; // go on searching towards left (lower indices)
			}
		} else if(x < A[mid]){
			high = mid-1;
		} else{
			low = mid+1;
		}

	}
	return result;
}




int main(){
	
	int A[] = {1, 1, 3, 3, 5, 5, 5, 5, 5, 9, 9, 11};
	int x;
	int firstIndex = 0;
	int lastIndex = 0;
	
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	firstIndex = BinarySearch(A, sizeof(A)/sizeof(A[0]), x, true);
	
	if(firstIndex == -1){
		printf("Count of %d is %d\n", x, 0);
	} else {
		lastIndex = BinarySearch(A, sizeof(A)/sizeof(A[0]), x, false);
		printf("Count of %d is %d\n", x, (lastIndex-firstIndex)+1);
	}
	
	
	return 0;
}

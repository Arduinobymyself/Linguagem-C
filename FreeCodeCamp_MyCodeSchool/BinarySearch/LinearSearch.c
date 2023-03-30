#include <stdio.h>


int LinearSearch(int A[], int n, int x){
	int i;
	for(i=0; i<n-1; i++){
		if(A[i] == x){
			return i;
		}
	}
	return -1;
}




int main(){
	
	int A[] = {2, 6, 13, 21, 36, 47, 63, 81, 97};
	int n, x;
	int result;
	
	printf("Give an x: ");
	scanf("%d", &x);
	
	result = LinearSearch(A, 9, x);
	if(result != -1){
		printf("Found %d at index %d.\n", x, result);
	} else{
		printf("%d not found in the array.\n", x);
	}
	
	
	return 0;
}

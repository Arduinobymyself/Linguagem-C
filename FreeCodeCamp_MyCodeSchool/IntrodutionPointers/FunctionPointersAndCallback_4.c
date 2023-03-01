#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b){
	int A = *((int*)a); // typecast to int* and de-referencing (getting value)
	int B = *((int*)b); // typecast to int* and de-referencing (getting value)
	
	//return A-B; // for increasing order {-31 -6 -1 4 22 50}
	//return B-A; // for decreasing orde {50 22 4 -1 -6 -31}
	//return abs(A)-abs(B); // for absolute increasing order {-1 4 -6 22 -31 50}
	return abs(B)-abs(A); // for absolute decreasing order {50 -31 22 -6 4 -1}
	
	
}

int main(){
	int i;
	int A[] = {-31, 22, -1, 50, -6, 4}; // => {-1, 4, -6, 22, -31, 50}
	
	
	
	qsort(A, 6, sizeof(int), compare );
	for(i=0; i<6; i++) printf("%d ", A[i]);
	printf("\n=======================================\n");
	
	
	
	
	
	
	return 0;
}

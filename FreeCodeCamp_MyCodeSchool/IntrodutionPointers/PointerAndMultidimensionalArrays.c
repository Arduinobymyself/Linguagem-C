#include <stdio.h>


void Func(int* Arr){
	
}

int main(){
	int C[3][2][2] = {{{2, 5}, {7, 9}},
	                  {{3, 4}, {6, 1}},
					  {{0, 8}, {11, 13}}};
					  // returns int (*)[2][2], a poninter for 2-dim array of 2 integers
	
	int A[2] = {1, 2}; // returns int*, a pointer for an integer
	int B[2][3] = {{2, 4, 6}, {5, 7, 9}}; // returns int (*)[3], a pointer for 1-dim array of 3 integers
					  
	printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]);
	printf("%d\n", *(C[0][0]+1));
	
	Func(A);
	
	
	return 0;
}

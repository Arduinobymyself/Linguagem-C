#include <stdio.h>

int main(){
	
	
	int A[5] = {2, 4, 5, 8, 1};
	int B[2][3] = {{2, 3, 6}, {4, 5, 8}};
	
	int (*p)[3] = B;
	
	// printig the base addres of the array	
	printf("%d\n", B);      // or &B[0]
	printf("%d\n", *B);     // or B[0] or &B[0][0]
	
	// printing the base address + 1 (12 bytes forward)
	printf("%d\n", B+1);    // or &B[1]
	printf("%d\n", *(B+1)); // or B[1] or B[1][0]
	
	printf("%d\n", *(B+1)+2); // or B[1]+2 or B[1][2]
	printf("%d\n", *(*B+1));  // or B[0][1]

	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	
}

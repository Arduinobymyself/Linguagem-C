#include <stdio.h>

int main(){
	
	int x = 5;
	int *p;
	p = &x;
	
	printf("%d\n", p);
	printf("%d\n", *p);
	p = p + 1;
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	int A[5] = {2, 4, 5, 8, 1};
	p = &A[0];
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", p+2);
	printf("%d\n", *(p+2));
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	printf("%d\n", A);
	printf("%d\n", *A);
	printf("%d\n", A+2);
	printf("%d\n", *(A+2));
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	
}

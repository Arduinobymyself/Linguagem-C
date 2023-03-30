#include <stdio.h>
#include <math.h>

int FALSE = 0;
int TRUE = 1;

int Prime(int n){
	int d;
	if(n <= d) return FALSE;
	for(d=2; d<=sqrt(n); d++){
		if(n%d == 0) return FALSE;
	}
	return TRUE;
}

int main(){
	
	int n;
	
	printf("Enter a number n: ");
	scanf("%d", &n);

	
	if(Prime(n) == TRUE){
		printf("The number %d is Prime.\n", n);
	} else{
		printf("The number %d is not Prime.\n", n);
	}
	
	
	
	return 0;
}

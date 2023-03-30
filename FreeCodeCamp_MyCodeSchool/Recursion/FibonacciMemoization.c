#include <stdio.h>

int F[200];
int FibMemo(int n){
	if(n <= 1) return n;
	if(F[n] != -1) return F[n];
	F[n] = FibMemo(n-1)+FibMemo(n-2);
	return F[n];
}


int main(){
	
	int n, i;
	int result;
	
	for(i=0; i<200; i++) F[i] = -1;
	
	printf("Give an n: ");
	scanf("%d", &n);
	
	result = FibMemo(n);
	printf("Fibonacci number is: %d", result);
	
	
	return 0;	
}

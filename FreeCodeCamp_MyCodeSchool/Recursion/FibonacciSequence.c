#include <stdio.h>

int FibNonRecursive(int n){
	if(n <= 1){
		return n;
	}
	int i, F1, F2, F;
	F1 = 0;
	F2 = 1;
	for(i=2; i<=n; i++){
		F = F1+F2;
		F1 = F2;
		F2 = F;
	}
	return F;
}

int FibRecursive(int n){
	if(n <= 1) return n;
	else return FibRecursive(n-1)+FibRecursive(n-2);
}



int main(){
	
	int n, result;
	
	printf("Give me an n: ");
	scanf("%d", &n);
	
	result = FibNonRecursive(n);
	printf("\nNon recursive Fibonacci: %d", result);
	result = FibRecursive(n);
	printf("\nRecursive Fibonacci: %d", result);
	
	
	
	return 0;
}

#include <stdio.h>


int Factorial(int n){
	if(n == 0) return 1;
	//printf("I am calculating F(%d)\n", n);
	int F = n*Factorial(n-1);
	//printf("Done! F(%d) = %d\n", n, F);
	return F;
	
}

int main(){
	
	int n;
	printf("Give me a n: ");
	scanf("%d", &n);
	
	int result = Factorial(n);
	printf("The factorial of %d is %d", n, result);
	
	
	
	return 0;
}

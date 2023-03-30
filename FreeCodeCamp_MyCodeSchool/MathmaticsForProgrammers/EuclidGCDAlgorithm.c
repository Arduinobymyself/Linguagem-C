#include <stdio.h>

int euclid_gcd(int a, int b){
	int dividend = a >= b ? a : b;
	int divisor = a <= b ? a : b;
	
	while(divisor != 0){
		int remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
	}
	return dividend;
}


int main(){
	
	int results = 0;
	
	results = euclid_gcd(124, 400);
	
	printf("GCD = %d\n", results);
	
	
	
	
	return 0;
}

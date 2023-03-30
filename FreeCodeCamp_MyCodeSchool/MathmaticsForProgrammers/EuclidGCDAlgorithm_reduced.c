#include <stdio.h>

int euclid_gcd(int a, int b){
	
	while(b != 0){
		int remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}


int main(){
	
	int results = 0;
	
	results = euclid_gcd(124, 400);
	
	printf("GCD = %d\n", results);
	
	
	
	
	return 0;
}

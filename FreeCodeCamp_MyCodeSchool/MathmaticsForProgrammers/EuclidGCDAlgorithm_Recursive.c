#include <stdio.h>

int euclid_gcd_recursive(int a, int b){

	return b == 0 ? a : euclid_gcd_recursive(b, a % b);

}


int main(){
	
	int results = 0;
	
	results = euclid_gcd_recursive(124, 400);
	
	printf("GCD = %d\n", results);
	
	
	
	
	return 0;
}

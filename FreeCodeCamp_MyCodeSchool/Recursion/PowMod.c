#include <stdio.h>

int PowMod(int x, int n, int M){
	int y;
	if(n == 0) return 1;
	else if(n%2 == 0){
		y = PowMod(x, n/2, M);
		return (y*y)%M;
	} else return ((x%M)*PowMod(x, n-1, M))%M;
}

int main(){
	
	int x, n, M, result;
	
	printf("Give an x and n: ");
	scanf("%d %d", &x, &n);
	printf("Give me a mod: ");
	scanf("%d", &M);
	
	result = PowMod(x, n, M);
	printf("Mod %d of %d to the power of %d is %d\n", M, x, n, result);

	
	
	return 0;
}

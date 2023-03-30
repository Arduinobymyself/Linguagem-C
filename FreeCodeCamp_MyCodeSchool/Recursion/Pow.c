#include <stdio.h>

int Pow(int x, int n){
	int y;
	if(n == 0) return 1;
	else if(n%2 == 0){
		y = Pow(x, n/2);
		return y*y;
	} else return x*Pow(x, n-1);
}

int main(){
	
	int x, n, result;
	
	printf("Give an x and n: ");
	scanf("%d %d", &x, &n);
	
	result = Pow(x, n);
	printf("%d to the power of %d is %d\n", x, n, result);

	
	
	return 0;
}

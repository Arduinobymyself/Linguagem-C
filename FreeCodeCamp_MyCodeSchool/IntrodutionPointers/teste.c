#include <stdio.h>

int main(){
	int x = 5;
	int *p;
	p = &x;
	printf("%d\n%d\n\n", p, *p); // endereço de x, valor de x
	int **q;
	q = &p;
	printf("%d\n%d\n%d\n\n", q, *q, **q); // endereço de q, endereço de p, valor de x
	int ***r;
	r = &q;
	printf("%d\n%d\n%d\n%d\n\n", r, *r, **r, ***r); // endereço de r, endereço de q, endereço de p, valor de x
	***r = 10;
	printf("%d\n\n", x); // valor de x, 10
	**q = 12;
	printf("%d\n\n", x); // valor de x, 12
	
	
	return 0;
}

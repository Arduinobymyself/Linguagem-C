#include <stdio.h>

int main(){
	int x = 5;
	int *p;
	p = &x;
	printf("%d\n%d\n\n", p, *p); // endere�o de x, valor de x
	int **q;
	q = &p;
	printf("%d\n%d\n%d\n\n", q, *q, **q); // endere�o de q, endere�o de p, valor de x
	int ***r;
	r = &q;
	printf("%d\n%d\n%d\n%d\n\n", r, *r, **r, ***r); // endere�o de r, endere�o de q, endere�o de p, valor de x
	***r = 10;
	printf("%d\n\n", x); // valor de x, 10
	**q = 12;
	printf("%d\n\n", x); // valor de x, 12
	
	
	return 0;
}

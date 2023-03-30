#include <stdio.h>

struct Point{
	double x, y;
};

const int LEFT = -1, RIGHT = 1, ON_THE_LINE = 0;


double get_cross_product(struct Point p1, struct Point p2){
	return p1.x*p2.y-p1.y*p2.x;	
}

struct Point subtract(struct Point p1, struct Point p2){
	struct Point result;
	result.x = p1.x-p2.x;
	result.y = p1.y-p2.y;
	return result;
}

int get_direction(struct Point a, struct Point b, struct Point p){
	b = subtract(b, a);
	p = subtract(p, a);
	double cross_product = get_cross_product(b, p);
	if(cross_product > 0){
		return LEFT;
	} else if(cross_product < 0){
		return RIGHT;
	} else{
		return ON_THE_LINE;
	}
}

int main(){
	
	
	struct Point A = {-30, 10};
	struct Point B = {29, -15};
	struct Point P = {15, 28};

	int direction = get_direction(A, B, P);
	
	printf("The direction is: ");
	if(direction == 1){
		printf(" right.\n");
	} else if(direction == -1){
		printf(" left.\n");
	} else{
		printf(" on the line.\n");
	}
	
	return 0;
}

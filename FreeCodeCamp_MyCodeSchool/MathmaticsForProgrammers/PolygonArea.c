#include <stdio.h>
#include <math.h>

struct Point{
	float x;
	float y;
};

float cross_product(struct Point a, struct Point b){
	return ((a.x * b.y) - (a.y * b.x));
}

float area(struct Point vertices[], int n){
	float sum = 0;
	int i;
	for(i = 0; i < n; i++){
		sum += cross_product(vertices[i], vertices[i + 1]);
	}
	return abs(sum) / 2.0;
	
}


int main(){
	
	//struct Point points[] = { {3.0, 2.0}, {2.0, 3.0} }; // its ok too
	
	struct Point O = {0.0, 0.0};
	struct Point A = {3.0, 2.0};
	struct Point B = {2.0, 3.0};
	
	struct Point points[] = {O, A, B};

	float cross = cross_product(A, B);
	float triangle = area(points, 3);
	
	printf("Cross prodct = %d\n", cross);
	printf("Triangle Area = %d\n", triangle);
	
	
	return 0;
}

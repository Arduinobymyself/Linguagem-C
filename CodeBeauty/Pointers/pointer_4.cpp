#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getMin(int numbers[], int size){
	int min = numbers[0];
	for(int i = 1; i < size; i++){
		if(numbers[i] < min){
			min = numbers[i];
		}
	}
	return min;
}



int getMax(int numbers[], int size){
	int max = numbers[0];
	for(int i = 1; i < size; i++){
		if(numbers[i] > max){
			max = numbers[i];
		}
	}
	return max;
}



void getMinAndMax(int numbers[], int size, int* min, int* max){
for(int i = 1; i < size; i++){
		if(numbers[i] > *max){
			*max = numbers[i];
		}
		if(numbers[i] < *min){
			*min = numbers[i];
		}
	}
}


int main(int argc, char** argv) {

	int numbers[5] = {5, 4, -2, 29, 6};

	/*cout << "Min is " << getMin(numbers, 5) << endl;
	cout << "Max is " << getMax(numbers, 5) << endl;*/
	
	int min = numbers[0];
	int max = numbers[0];
	getMinAndMax(numbers, 5, &min, &max);
	cout << "Min is " << min << endl;
	cout << "Max is " << max << endl;
	

	return 0;
}

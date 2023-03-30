#include <iostream>
using namespace std;



int main(int argc, char** argv) {
	
	int rows, cols;
	cout << "rows, cols: ";
	cin >> rows >> cols;
	
	int** table = new int*[rows]; // creates a table of pointers

	for(int i = 0; i < rows; i++){
		table[i] = new int[cols]; // creates each array
	}
	
	table[1][2] = 88; // 3 x 3 array
	
	cout << table[1][2] << endl;
	

	for(int i = 0; i < rows; i++){
		delete[] table[i];
	}
	delete[]table;
	table = NULL;
	
	
	
	
	
	return 0;
}

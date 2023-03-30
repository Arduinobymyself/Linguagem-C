#include <iostream>
#include <memory>
using namespace std;



int main(int argc, char** argv) {

	unique_ptr<int> unPtr1 = make_unique<int>(25);
	cout << unPtr1 << endl;
	cout << *unPtr1 << endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include <iostream>
#include <memory>
using namespace std;

class myClass{
	public:
	myClass(){
		cout << "Constructor invoked" << endl;
	}
	~myClass(){
		cout << "Destructor invoked" << endl;
	}
};

int main() {

	/*
	// some tests with smart pointer

		unique_ptr<int> unPtr1 = make_unique<int>(25);
	//cout << unPtr1 << endl;
	unique_ptr<int> unPtr2 = move(unPtr1);


	//cout << *unPtr1 << endl; // this is not possible due to the point was moved
	cout << *unPtr2 << endl;
	*/

	/*
	{// a scope
	unique_ptr<myClass> unPtr1 = make_unique<myClass>(); // this unique pointer will be allocated and deallocated in this scope
	}
	*/


	// some tests with shared pointers
	{
		shared_ptr<myClass> shrPtr1 = make_shared<myClass>(); // a shared pointer
		cout << "Shared count" << shrPtr1.use_count() << endl;
		{
			shared_ptr<myClass> shrPtr2 = shrPtr1; // sharing the shrPtr1 with shrPtr2
			cout << "Shared count" << shrPtr1.use_count() << endl;
		}
		cout << "Shared count" << shrPtr1.use_count() << endl;
	}



    /*
	// some tests with weak pointers
	weak_ptr<int> weakPtr1;
	{
		shared_ptr<int> shrPtr1 = make_shared<int>(25);
		weakPtr1 = shrPtr1;
	}*/











	system("pause");
	return 0;
}

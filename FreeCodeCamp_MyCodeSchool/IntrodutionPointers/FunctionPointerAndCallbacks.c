#include <stdio.h>

void A(){ // a void function
	printf("Hello!\n");
}

void B(void (*ptr)()){ // a void function pointer as argument, like "A"
	ptr(); // call-back the function that "ptr" points to
}

int main(){
	
	void (*p)() = A; // passing the address of "A" to a void function pointer
	B(p); // calling "B", give us "Hello!"
	
	// or just:
	B(A); // give us "Hello!"
	
	/*
	A is a call-back function
	*/
	
	return 0;
}

#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

struct Node{
	int data;
	struct Node* next;
};

struct Node* head = NULL;

/*
class Stack{
	private:
		char A[101];
		int top;
	public:
		void Push(int data);
		void Pop();
		void top();
		bool IsEmpty();
};
*/


void ReverseString(char* C, int size){
	stack<char> S;
	// loop for push
	for(int i = 0; i < size; i++){
		S.push(C[i]);
	}
	// loop for pop
	for(int i = 0; i < size; i++){
		C[i] = S.top(); // overrite the character at index i
		S.pop(); // perform pop
	}
}

void ReverseLinkedList(){
	if(head == NULL) return;
	stack<struct Node*> S;
	Node* temp = head;
	while(temp != NULL){
		S.push(temp);
		temp = temp->next;
	}
	temp = S.top();
	head = temp;
	S.pop();
	while(!S.empty()){
		temp->next = S.top();
		S.pop();
		temp = temp->next;
	}
	temp->next = NULL;
}

struct Node* top = NULL;

void Push(int data){
	struct Node* temp = new Node;
	temp->data = data;
	temp->next = top;
	top = temp;
}

void Print(){
	struct Node* temp;
	temp = top;
	if(temp == NULL){
		printf("Stack is empty\n");
		return;
	}
	printf("Stack: ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n\n");
}
int main(int argc, char** argv) {
	// to test reversing a string
	/*
		char C[51];
		cout << "Enter a string: ";
		gets(C);
		ReverseString(C, strlen(C));
		cout << "Output = " << C;
	*/
	
	// to test reversing a linked list
	Push(2);
	Push(4);
	Push(10);
	Push(22);
	Print();
	ReverseLinkedList();
	Print();
	
	
	
	
	return 0;
}

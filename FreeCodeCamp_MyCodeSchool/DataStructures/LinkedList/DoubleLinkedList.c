#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; // global variable - pointer to head node


// functions declaration
struct Node* GetNewNode(int data);
void InsertAtHead(int data);
void InsertAtTail(int data);
void Print();
void ReversePrint();


int main(int argc, char *argv[]) {
	
	head = NULL;
	
	InsertAtHead(5);
	InsertAtHead(6);
	InsertAtHead(2);
	InsertAtHead(4);
	
	Print(); // 4 2 6 5
	ReversePrint(); // 5 6 2 4

	InsertAtTail(10);
	
	Print(); // 4 2 6 5 10
	ReversePrint(); // 10 5 6 2 4

	
	
	
	return 0;
}

// functions definition

struct Node* GetNewNode(int data){
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data  = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int data){
	struct Node* newNode = GetNewNode(data);
	if(head == NULL){
		head = newNode;
		return;
	}
	//if list is not empty
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

void InsertAtTail(int data){
	struct Node* newNode = GetNewNode(data);
	struct Node* temp = head;
	if(temp == NULL) return; // empty list, exit
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
	newNode->next = NULL;
}

void Print(){
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n\n");
}

void ReversePrint(){
	struct Node* temp = head;
	if(temp == NULL) return; //empty list, exit
	// going to last node
	while(temp->next != NULL){
		temp = temp->next;
	}
	// traversing backward using prev pointer
	printf("Reverse: ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n\n");
}





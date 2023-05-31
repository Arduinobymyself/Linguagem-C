#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* link;
};

struct Node* top = NULL;

void Push(int data){
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node*)); // create a new node
	temp->data = data; // the new node receives the data
	temp->link = top; // the new node link receives the top link
	top = temp; // top receives the addres of the new node
}

void Pop(){
	struct Node* temp;
	if(top == NULL) return;
	temp = top;
	top = top->link;
	free(temp);
}

int Top(){
	return top->data;
}

int IsEmpty(){
	if(top == NULL){
		return 1;
	} else {
		return 0;
	}
}

Print(){
	struct Node* temp;
	temp = top;
	if(temp == NULL){
		printf("Stack is empty\n");
		return;
	}
	printf("Stack: ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->link;
	}
	printf("\n\n");
}

int main(int argc, char *argv[]) {
	
	int e = IsEmpty();
	if(e == 1){
		printf("Stack is empty.\n\n");
	} else {
		printf("Stack is not empty.\n\n");
	}
	
	Push(2);
	Push(7);
	Push(5);
	Print();
	
	Pop();
	
	Push(10);
	Print();
	
	int t = Top();
	printf("Top of Stack: %d\n", t);
	
	
	
	return 0;
}

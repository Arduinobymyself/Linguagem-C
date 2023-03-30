#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Node{ // data structure
	int data;
	struct Node* next;
};



struct Node* head; // a pointer to a node



void Insert(int x){ // insert data at the beginning of the list
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); //dynamic mem alocation
	(*temp).data = x;		//same as temp->data = x
	(*temp).next = NULL;	//same as temp->next = NULL
	if(head != NULL) (*temp).next = head;
	head = temp;
}

void InsertAt(int data, int n){ // insert data at a specific position
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	(*temp1).data = data;
	(*temp1).next = NULL;
	if(n == 1){ //when the list is empty
		(*temp1).next = head;
		head = temp1;
		return;
	}
	struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
	temp2 = head;
	int i;
	for(i=0; i<n-2; i++){
		temp2 = (*temp2).next;
	}
	(*temp1).next = (*temp2).next;
	(*temp2).next = temp1;
	
}

void Delete(int n){
	struct Node* temp1 = head;
	if(n ==1){
	 	head = temp1->next; // head now points to second node
	 	free(temp1);
	 	return;
	}
	int i;
	for(i=0; i<n-2; i++){
		temp1 = temp1->next; // temp1 points to (n-1)th Node
	}
	struct Node* temp2 = temp1->next; // nth Node
	temp1->next = temp2->next; // (n+1)th Node
	free(temp2); // delete temp2
}


void Reverse(){
	
	struct Node *next, *prev, *current;
	
	current = head;
	prev = NULL;
	
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	
}



void Print(){ // print the list
	struct Node* temp = head; // never modify head
	printf("List is: ");
	while(temp != NULL){
		printf("%d ", (*temp).data);
		temp = (*temp).next;
	}
	printf("\n");
}




int main(int argc, char *argv[]) {
	
	head = NULL; //empty list
	
	
	
	int n, i, x;
	/*
	// just ask user for the list
	printf("how many numbers?\n ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Enter the number \n");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
	*/
	
	// just insert value at a specific position
	//InsertAt(100,2);
	//InsertAt(200,1);

	// creats a list
	printf("Creating a list\n");
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Insert(10);
	Insert(121);
	Print();
	
	// ask user for a position to delete
	printf("Enter a position to delete\n");
	scanf("%d", &n);
	Delete(n);
	Print();
	
	printf("Reversing\n");
	Reverse();
	Print();
	
	
	
	
	return 0;
}



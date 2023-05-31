#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;

void Push(int x){
	if(top == MAX_SIZE - 1){
		printf("Error: stack overflow\n");
		return;
	}
	A[++top] = x;
}

void Pop(){
	if(top == -1){
		printf("Error: no element to pop\n");
		return;
	}
	top--;
}

int Top(){
	return A[top];
}

Print(){
	int i;
	printf("Stack: ");
	for(i = 0; i <= top; i++){
		printf("%d ", A[i]);
	}
	printf("\n\n");
}

int main(int argc, char *argv[]) {
	
	Push(2);
	Push(5);
	Push(10);
	Print();
	Pop();
	Push(12);
	Print();
	int t = Top();
	printf("Top of stack: %d\n", t);
	
	
	return 0;
}

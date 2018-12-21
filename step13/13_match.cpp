#include<stdio.h>
#define MAX 100
int stack[MAX];
int stack2[MAX];
int top = 0;

void push(int data) {
	if (top >= MAX);
	else {
		stack[top] = data;
		top++;
	}
}

void pop() {
	if (!top);
	else {
		stack[top - 1] = -1;
		top--;
	}
}



int main() {
	char arr[100];
	int i;

	scanf("%s", arr);

	for (i = 0; i < 100; i++) {
		if (arr[i] == '\0') break;
		
		if (arr[i] == '(') push(i);
		if (arr[i] == ')') {
			stack[top - 1] = -1;
			top--;
			if (top < 0) break;
		}
	}
	if (top) printf("not match");
	else {
		for (i = 0; i < 100; i++) {
			if (arr[i] == '\0') break;
			if (arr[i] == '(') push(i);
			if (arr[i] == ')') {
				printf("%d %d\n", stack[top - 1], i);
				pop();
			}
		}

		
			
	
	}

}

#include<stdio.h>
int stack[1000];
int top;

void push(int x) {
	stack[top] = x;
	top++;
}

void pop() {
	stack[top-1] = -1;
	top--;
}

int main() {
	int arr[1000]{ 0, };
	int n,i,j;
	
	
	scanf("%d", &n);
	while (1) {
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			if (!arr[i]) break;
		}
		if (!arr[0]) break;
		
		i = 0;
		j = 1;
		while (1) {
			if (!arr[i]) break;

			while (1) {
				if (j > arr[i]) break;
				push(j);
				j++;
			}
			if (stack[top - 1] == arr[i]) pop();

			i++;
		}
		top ? printf("No\n") : printf("Yes\n");
		
		top = 0;
	}
}

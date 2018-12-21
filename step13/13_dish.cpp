#include <stdio.h>
char stack[100];
int list[100];
int top = 0 , l = 0;

void push(char x) {
	list[l++] = 0;
	stack[++top] = x;
}

char pop() {
	list[l++] = 1;
	return stack[top--];
}


int main() {
	char arr[60];
	int i,cnt=0;
	char j='a';
	scanf("%s", arr);
	
	for (i = 0; i <= 30; i++) {
		if (arr[i] == '\0') break;
		
		while (1) {
			if (j > arr[i]) break;
			cnt++;
			push(j);
			j++;
		}
		if (stack[top] == arr[i]) {
			pop();
			cnt++;
		}

	}
	if (!stack[top]) {
		for (i = 0; i < cnt; i++)
			list[i] ? printf("pop\n") : printf("push\n");
	}
	else printf("impossible");


}

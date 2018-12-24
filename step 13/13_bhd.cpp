#include<stdio.h>
int stack[80000];
int top;

void push(int x) {
	stack[++top] = x;
}
void pop() {
	stack[top] = -1;
	top--;
}

int main() {
	int n,m,i;
	long long int cnt=0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		

		while (stack[top] <= m && top) {
			pop();
		}

		cnt += top;
		push(m);
	}
		
	


	printf("%lld", cnt);
}
/*
	10 3 7 4 12 2

	stack top = 10



*/
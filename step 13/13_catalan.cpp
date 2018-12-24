#include<stdio.h>
int stack[100];
int top;

void push(int x) {
	stack[top] = x;
	top++;
}
void pop() {
	stack[top - 1] = -1;
	top--;
}


int main() {
	int arr[100]{ 0, };
	int list[100]{ 0, };
	int n,i,j=1;

	scanf("%d", &n);
	for (i = 0; i < n; i++) 
		scanf("%d", &arr[i]);

	i = 0;
	while (1) {
		if (!arr[i]) break;

		while (1) {
			if (j > n+1) break;

			if (stack[top - 1] == arr[i]) {
				pop();
				break;
			}
			push(j);
			j++;
		}

		i++;
	}
	top ? printf("NO") : printf("YES");
	

}

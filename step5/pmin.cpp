#include<stdio.h>

int main() {
	int a[100];
	int n,x, i ,min =1000;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &x);
		a[i] = x;
		if (min >= x) min = x;
	}

	for (i = 1; i <= n; i++) if (min == a[i])
		printf("%d ", i);
}
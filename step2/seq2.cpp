#include<stdio.h>

int main() {
	int n, result;
	register int i;
	result = 0;

	scanf("%d", &n);


	for (i = 1; i <= n; i++) {
		result += i;
		printf("1..%d %d\n", i, result);
	}

}
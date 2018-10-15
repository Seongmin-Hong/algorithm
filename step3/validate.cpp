#include<stdio.h>

int main() {
	int n,v,sum;
	register int i;

	sum = 0;

	for (i = 1;i <= 5;i++) {
		scanf("%d", &n);
		v = n * n;
		sum += v;
		sum = sum % 10;
	}
	printf("%d", sum);
}
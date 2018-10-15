#include<stdio.h>

int main() {
	int n,sum;
	register int i;

	sum = 0;

	scanf("%d", &n);
	for (i = 1;i < n;i++) {
		if (n%i == 0) sum += i;
	}
	if (n == sum) {
		printf("%5d  PERFECT", n);
	}
	else if (n > sum) {
		printf("%5d  DEFICIENT", n);
	}
	else printf("%5d  ABUNDANT",n);
}
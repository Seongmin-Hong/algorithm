#include<stdio.h>

int main() {
	int n;
	int sum = 0, max = 0, min = 1000;
	register int i;

	for (i = 1;i <= 10;i++) {
		scanf("%d", &n);
		sum += n;
		if (max < n)max = n;
		if (min > n)min = n;
	}
	printf("%d %d %d", sum, max, min);
}
#include<stdio.h>

int main() {
	int n, min;
	register int i;
	min = 100;

	for (i = 0;i < 7;i++) {
		scanf("%d", &n);

		if (n < min) min = n;
	}
	printf("%d", min);
}

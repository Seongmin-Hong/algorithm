#include<stdio.h>

int main() {
	int n;
	register int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("*");
		if (i == n / 2 + 1) {
			for (j = 1; j <= n - 2; j++) printf("*");
		}
		else {
			for (j = 1; j <= n - 2; j++) printf(" ");
		}
		printf("*\n");

	}

	


}
#include<stdio.h>

int main() {
	int n;
	register int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (i == 1 || i == n) {
			for (j = 1; j <= n-1; j++) printf("*");
		}
		else {
			for (j = 1; j <= n-i; j++) printf(" ");
		}
		printf("*\n");
	}

}
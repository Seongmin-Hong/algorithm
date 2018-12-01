#include<stdio.h>

int main() {
	int n;
	register int i,j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("*");
		if (i == 1 || i == (n + 1) / 2) {
			for (j = 1; j <= n - 1; j++) printf("*");
		}
		printf("\n");
	}

}
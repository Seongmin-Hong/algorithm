#include<stdio.h>

int main() {
	int n;
	register int i, j,k;

	scanf("%d", &n);

	for (i = 1; i <= (n+1)/2; i++) {
		for (j = 1; j <= (n/2)+1 - i; j++) printf(" ");
		for (k = 1; k <= i * 2 - 1; k++) printf("*");
		printf("\n");
	}

}

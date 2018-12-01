#include<stdio.h>

int main() {
	int n;
	register int i, j;

	scanf("%d", &n);
	
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

}
#include<stdio.h>

int main() {
	int n;
	register int i, j, k;

	scanf("%d", &n);
	
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= n - i; j++) printf(" ");
		for (k = i; k >= 1; k--) printf("%d", k);
		printf("\n");
	}

}

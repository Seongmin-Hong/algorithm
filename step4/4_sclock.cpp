#include<stdio.h>

int main() {
	int n,a=1;
	register int i, j,k;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (n / 2 >= i) {
			for (k = 1; k < i; k++) printf(" ");
			for (j = 1; j <= n - ((i*2)-1); j++) printf("*");
			printf("$\n");
		}
		else if ((n+1)/2<i) {
			for (k = 1; k <= n - i;k++) printf(" ");
			printf("$");
			for (j = 1; j <= a * 2; j++) printf("*");
			printf("\n");
			a++;
		}
		else {
			for (j = 1; j <= n / 2; j++) printf(" ");
			printf("$\n");
		}

	}


}

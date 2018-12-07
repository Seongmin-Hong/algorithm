#include<stdio.h>

int main() {
	int n,a=2;
	register int i, j,k;

	scanf("%d", &n);

	
	for (i = 1; i <= (n * 2) - 1; i++) {
		if (n >= i) {
			for (j = 1; j <= n - i; j++) printf(" ");
			for (k = 1; k <= (i * 2) - 1; k++) printf("*");
			printf("\n");
		}
		else {
			for (j = 1; j <= i - n; j++) printf(" ");
			for (k = 2*(n*2-i)-1;k >=1  ; k--) printf("*");
			a++;
			printf("\n");
		}
		
	}

}

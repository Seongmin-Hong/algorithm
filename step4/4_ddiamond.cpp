#include<stdio.h>

int main() {
	int n,a;
	int i, j, k;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		a = i;
		if (i <= (n/2) +1) {
			for (j = (n/2)+1-i ; j >= 1; j--) printf(" ");
			for (k = 1; k <= (i * 2) - 1; k++) {		
				if (k >= i) {
					printf("%d", a);
					a--;
				}
				else printf("%d", k);
			}
		}
		else {
			a = n - i;
			for (j = 1; j <= i-(n/2)-1; j++) printf(" ");
			for (k = 1; k <= n - ((i-((n/2)+1))*2) ;k++) {
				if (k > n-i+1 ) {
					printf("%d", a);
					a--;
				}
				else printf("%d", k);
			}
		}
		
		printf("\n");
	}


}

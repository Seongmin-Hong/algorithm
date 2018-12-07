#include<stdio.h>

int main() {
	int n,t;
	int i, j;

	scanf("%d", &n);
	printf(" **");
	for (i = 1; i <= n; i++) printf(" ");
	printf("**\n");
	
	if (n & 1) {
		for (i = 1;i<=((n+6)/2)+1;i++) {
			t = 1;
			for (j = t; j <= n + 6; j++) {
				if (j == i || j == n+7-i ||
					(i<=n+1-i && (j==i+3 || j==n+4-i))) printf("*");
				else printf(" ");
			}
			t++;
			printf("\n");
		
		}
	}
	else {
		for (i = 1; i <= (n+6)/2; i++) {
			t = 1;
			for (j = t; j <= n + 6; j++) {
				if (j == i || j == n + 7 - i ||
					(i<=n+1-i && (j==i+3 || j==n+4-i))) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	}
	



}

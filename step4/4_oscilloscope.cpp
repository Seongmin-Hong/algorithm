#include<stdio.h>

int main() {
	int n,a=0,S;
	register int i, j,k;
	
	scanf("%d", &n);
	
	
	for (i = 10; i >= -10; i--) {
		a = 0;
		
		for (j = 0; j <= 59; j++) {
			
			if (i <= n && i >= -n &&
				(j % (n*2) == i || j % (n*2) == n ||
					(n*2)+i == j%(n*2)))
				printf("*");
			else printf(" ");

		
		}
		printf("|%3dV\n", i);
		
	}

}

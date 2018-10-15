#include<stdio.h>

int main() {
	int x, m,n;
	register int i;
	scanf("%d %d", &x, &m);

	for (i = 1;i < m; i++) {
		
		n = ((m * i) + 1) / x;
		if (x*n == (m * i) + 1)	break;
		
	}
	if (x*n == (m*i) + 1) {
		printf("%d", n);
	}
	else printf("No such integer exists.");
}
/*

0<x<m

0<n<m

x*n / m ..1

n =  (17 * i) + 1 / 4
13 = 17 * 3 + i / 4

*/
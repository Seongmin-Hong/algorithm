#include<stdio.h>

int main() {
	int n, c = 0;
	register int i;

	scanf("%d", &n);
	for (i = 1;i <= n;i++) {
		if (n == 1) break;
		if (!(n%i)) c++;
	}
	if (c++ == 2) printf("prime");
	else printf("not prime");
}
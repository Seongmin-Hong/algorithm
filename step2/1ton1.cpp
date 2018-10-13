#include<stdio.h>

int main() {
	int n, r;
	register int i;
	r = 0;

	scanf("%d", &n);

	for (i = 1;i < n;i++) {
		r += i;
		printf("%d+", i);
	}
	printf("%d=%d",n,r+n);
}

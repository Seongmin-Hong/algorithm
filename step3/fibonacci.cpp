#include<stdio.h>

int fibo(int x) {
	if (x == 1) return 1;
	if (x == 2) return 1;
	return fibo(x - 1) + fibo(x - 2);
}

int main() {
	int n ,r ,r2;
	register int i=1;

	while (1) {
		scanf("%d", &n);
		if (n < 2) break;

		r = fibo(n);
		r2 = fibo(n) + fibo(n - 1);

		printf("Case #%d:\n",i);
		if(n&1) printf("%d, %d\n\n", r, r2);
		else printf("%d, %d\n\n", r2,r);
		i++;
	}
}
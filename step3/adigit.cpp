#include<stdio.h>

int main() {
	int n, a,b,c;
	register int i;
	a = 0;
	b = 0;
	c = 0;
	

	for (i = 0; i < 7;i++) {
		scanf("%d", &n);
		
		if (n - 100 > 0) {
			c += n;
		}
		else if (n - 10 > 0) {
			b += n;
		}
		else if (n - 10 < 0) {
			a += n;
		}
		
	}
	printf("%d %d %d", a, b, c);
}

#include<stdio.h>

int main() {
	int n;
	int i,a=9,b=1,c,t=1;
	

	scanf("%d", &n);

	while (n>a) {
		n -= a;

		a = a/b * (b+1) * 10;
		b++;
	}
	c = (-n)%b+b;

	if (b == c) c -= b;
	for (i = 1; i <= c; i++) t *= 10;

	if (c != b-1) printf("%d", ((n-1) / (b*t)) % 10);
	else printf("%d", ((n-1) / (b*t)) % 10+1);
	
}

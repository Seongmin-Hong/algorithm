#include<stdio.h>

int main() {
	int n, m,a,b, gcd, lcm , temp;
	register int i;

	scanf("%d %d", &n, &m);
	a = n;
	b = m;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	gcd = a;
	lcm = n * m / gcd;

	printf("%d %d",gcd,lcm);
}
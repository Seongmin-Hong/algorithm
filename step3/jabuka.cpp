#include<stdio.h>

typedef long long int lld;

lld GCD(lld x, lld y) {
	if (y == 0) return x;
	else return GCD(y, x%y);
}

int main() {
	lld a, b, t;
	register lld i;

	scanf("%lld %lld", &a, &b);
	t = GCD(a, b);

	for (i = 1; i <= t; i++) {
		if (t%i==0) printf("%lld %lld %lld\n", i, a/i, b/i);
	}
}
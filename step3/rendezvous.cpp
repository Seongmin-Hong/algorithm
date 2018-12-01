#include<stdio.h>
typedef long long int lld;

lld GCD(lld x, lld y) {
	if (!y) return x;
	else return GCD(y, x%y);
}

int main() {
	lld a, b , x, y;
	lld result , track;
	register int i = 1;

	scanf("%lld %lld", &a, &b);

	track = (a + b) / GCD(a, b);
	x = a/GCD(a, b);
	y = b/GCD(a, b);

	result = ((x*track) + (y*track)) / track;

	printf("%lld", result);
}

// 68614184 49012062
// 78659212 95186995 - 46183139262639807

/*
	
	(2*5) + (3*5) / (2+3) 
	


	5 6
	
*/
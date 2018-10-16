#include<stdio.h>

int main() {
	int x, a;
	int t = 1;
	register int i;
	scanf("%d", &x);

	for (i = 1; i <= 7;i++) {
		if (t * 10 > x) break;
	
		a = x  % (t*10);
		if (a > 4*t) x += (t * 10) - a ;
		else x -= a;
		t *= 10;
		
	}
	printf("%d", x);
	
}
/*
5 % 10 5

1 0.5
10 5
100 50



*/
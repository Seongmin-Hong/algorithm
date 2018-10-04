#include<stdio.h>

int main() {
	double x,n,a;
	int y;
	scanf("%lf", &x);
	y = x;
	
	a = x - y;
	n = x - a;

	if (x < 0) {
		a = x - y + 1;
		n = x - a;
	}

	printf("%0.lf %0.2f", n ,a);
}
/*
	N = n + a
	-N = -(n+a)

	x = -a + n
*/
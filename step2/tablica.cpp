#include<stdio.h>

int main() {
	int result;
	double a, b, c, d ,r1,r2,r3,r4;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	r1 = (a / c) + (b / d);
	r2 = (c / d) + (a / b);
	r3 = (d / b) + (c / a);
	r4 = (b / a) + (d / c);

	if (r1 > r2 && r1 > r3 && r1 > r4) {
		result = 0;
	}
	else if (r2 > r1 && r2 > r3 && r2 > r4) {
		result = 1;
	}
	else if (r3 > r1 && r3 > r2 && r3 > r4) {
		result = 2;
	}
	else {
		result = 3;
	}

	printf("%d", result);
}
/*
a/c + b/d  0
c/d + a/b  1
d/b + c/a  2
b/a + d/c  3


*/
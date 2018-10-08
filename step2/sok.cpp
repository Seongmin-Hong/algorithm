#include<stdio.h>

int main() {
	int a, b, c, i, j, k;
	double x, y, z, r1, r2, r3;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &i, &j, &k);

	r1 = (double)a/i;
	r2 = (double)b/j;
	r3 = (double)c/k;
 

	if ( (r1*i <= a && r1 * j <= b && r1 * k <= c ) ) {
		x = a - (r1 * i);
		y = b - (r1 * j);
		z = c - (r1 * k);
	}
	else if (r2*i <= a && r2 * j <= b && r2 * k <= c ) {
		x = a - (r2 * i);
		y = b - (r2 * j);
		z = c - (r2 * k);
	}
	else {
		x = a - (r3 * i);
		y = b - (r3 * j);
		z = c - (r3 * k);
	}

	printf("%lf %lf %lf", x, y, z);
}

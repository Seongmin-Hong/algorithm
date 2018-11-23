
#include<stdio.h>
#include<math.h>

typedef long double ld;

int main() {
	int d, r1;
	ld n, sum = 0, r2;
	register int i;

	scanf("%d", &d);
	for (i = 1; i <= d; i++) {
		scanf("%lf", &n);

		sum += log10(n);
		r1 = sum;
		r2 = sum - r1;
		r2 = pow(10, r2);
	}
	printf("%.6lf %d", r2, r1);
}
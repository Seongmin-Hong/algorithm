#include<stdio.h>

int main() {
	double a, b;
	double x;
	register int i=1;

	scanf("%lf %lf", &a, &b);

	while (1) {
		
		x = b / a;
		
		if (x == i) {
			printf("1/%d", i);
			break;
		}
		
		if (x < i) {
			printf("1/%d ", i);
			a = (a*i) - b;
			b = b * i;
		}
		i++;
	}


}

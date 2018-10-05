#include<stdio.h>

int main() {
	double a, b, c, d ,x ,y;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	x = a / b;
	y = c / d;
	if (x >y) {
		printf("1");
	}
	else if (x == y) {
		printf("0");
	}
	else { printf("-1"); }

}
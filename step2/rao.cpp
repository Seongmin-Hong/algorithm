#include<stdio.h>

int main() {
	int a, b, c,x;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		x = b;
		b = a;
		a = x;
	}
	if (a > c) {
		x = c;
		c = a;
		a = x;
	}
	if (b > c) {
		x = c;
		c = b;
		b = x;
	}

	a = a * a;
	b = b * b;
	c = c * c;

	if (a + b == c) {
		printf("right");
	}
	else if (a + b > c) {
		printf("acute");
	}
	else if (a + b < c) {
		printf("obtuse");
	}
	else printf("error");
}
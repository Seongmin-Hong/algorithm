#include<stdio.h>

int main() {
	int a, b, c, d,e;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (d-c == c-b) {
		e = d + (d - c);
	}
	else {
		e = d * (d / c);
	}
	printf("%d %d %d %d %d", a, b, c, d, e);
}
/*
	���� n(a+l)

*/
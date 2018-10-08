#include<stdio.h>

int main() {
	int a, b, c , x;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) { 
		x = b;
		b = a;
		a = x;
	}
	if (a > c) {
		x = a;
		a = c;
		c = x;
	}
	if (b > c) {
		x = c;
		c = b;
		b = x;
	}
	printf("%d", b);


}
/*
 a < b < c

*/
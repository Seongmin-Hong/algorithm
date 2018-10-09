#include<stdio.h>

int main() {
	int a, b, c, d, s,r1,r2 , x ,y;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &s);

	x = (s / (a + b)) || 1;
	y = (s / (c + d)) || 1;
	r1 = (a - b) * x; 
	r2 = (c - d) * y ;

	if (s > a + b) {
		r1 + s % (a + b);
	}
	if (s > c + d) {
		r2 + s % (c + d);
	}


	if (r1 < 0) r1 = -r1;
	if (r2 < 0) r2 = -r2;
	
	if (r1 > r2) {
		printf("Nikky");
	}
	else if (r1 < r2) {
		printf("Byron");
	}
	else {
		printf("Tied");
	}
}
/*
	20 10
	21 10
	21
*/
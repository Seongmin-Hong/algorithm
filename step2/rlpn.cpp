#include<stdio.h>

int main() {
	int a, b, c, d, a1, b1, c1, d1;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d %d %d", &a1, &b1, &c1, &d1);

	if (a > c1 || c < a1 || b > d1 || d < b1) printf("none");
	
	else if (a == c1 && b == d1) printf("point");
	else if (a == c1 && d == b1) printf("point");
	else if (c == a1 && d == b1) printf("point");
	else if (c == a1 && b == d1) printf("point");
	
	else if (a >= c1 || c <= a1 || b >= d1 || d <= b1)  printf("line");


	else printf("rectangle");


}

/*
a1x <= b1x b2x <= a2x ++

rectangle
point
line
*/
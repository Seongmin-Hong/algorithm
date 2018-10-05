#include<stdio.h>

int main() {
	int x, y , a,b, result , result2;
	scanf("%d %d %d %d", &x, &y, &a, &b);

	result = (y - b) / (x - a) ;

	result2 = y - (x*result);

	printf("%d %d", result, result2);


}
/*
		y/x = b/a = k

		k = y+b / x+a

		500 15000
		800 21000

		15000=500*n + m
		m = 15000 - 500 * 20

		21000=800*n + m


*/
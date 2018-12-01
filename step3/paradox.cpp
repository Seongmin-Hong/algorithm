#include<stdio.h>

int fact(int x, int y) {
	if (y == 0) return 0;
	if (x == y) return 1;
	return x * fact(x-1,y);
}

int main() {
	int n, i, o = 0;
	double result=1 , days;
	days = 365.0;
	scanf("%d", &n);
	
	
	for (i = 0; i < n; i++) {
		result *= ((days - i) / days);
	}
	result = 1 - result;
	
	printf("%.6lf", result);
}
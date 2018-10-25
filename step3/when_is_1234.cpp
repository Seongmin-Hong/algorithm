#include<stdio.h>

int main() {
	int m, n, a, k, result;
	int sum = 0 ,sumday=0,day;
	int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	register int i;

	scanf("%d %d", &m, &n);
	for (i = 1;i <= n;i++) {
		scanf("%d", &a);
		sum += a;
	}
	scanf("%d", &k);
	
	for (i = m; i <= 12;i++) {
		sumday += month[i];
	}
	day = ((k - sum) / n)+a;
	
	sumday = (sumday - day) % 7;
	result = (sumday + a) %7;

	printf("%d", result);
}

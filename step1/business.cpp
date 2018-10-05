#include <stdio.h>

int main() {
	int n, m, p, c ,paid , real , get_money, profit;
	scanf("%d%d%d%d", &n, &m, &p, &c);

	paid = m + c;
	real = paid - p;
	get_money = real - c;
	profit = -(get_money - n);

	printf("%d", profit);



}
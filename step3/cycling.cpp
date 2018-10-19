#include<stdio.h>

int main() {
	int n, pi, past_pi = 0 ;
	int sum = 0, max = 0, min = 1000, max_sum = 0;
	register int i;

	scanf("%d", &n);
	for (i = 1;i <= n;i++) {
		scanf("%d", &pi);

		if (past_pi < pi) {
			if (max < pi) max = pi;
			if (min > pi) min = pi;

			sum = max - min;
		}
		else { 
			min = pi;
			max = pi;
		}
		
		if (max_sum < sum) max_sum = sum;
		past_pi = pi;
	}
	printf("%d", max_sum);
}
/*
	1 > 0

	max = 1
	min = 1

	2 > 1

	max = 2
	min = 1

	1 < 2
	pi < past_pi
	
	max_sum = sum
	min = 2
	max = 0

*/
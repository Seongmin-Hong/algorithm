#include<stdio.h>

int main() {
	int n,sum,j,sum2;
	register int i;

	scanf("%d", &n);
	
	sum = 0;
	sum2 = 0;
	j = n + 1;

	for (i = 1;i < n;i++) {
		sum += i;
	}

	while (sum > sum2) {
		sum2 += j;
		j++;
	}
	
	if (sum == sum2) {
		printf("O");
	}
	else printf("X");
}
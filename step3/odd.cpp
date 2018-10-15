#include<stdio.h>

int main() {
	int n,min,sum;
	register int i;
	min = 100;
	sum = 0;

	for (i = 1;i <= 7;i++) {
		scanf("%d", &n);
		if (n & 1 == 1) sum += n;
		if (n < min && n & 1 == 1) min = n;
		
	}
	if (sum == 0) {
		printf("-1");
	}
	else {
		printf("%d\n", sum);
		printf("%d", min);
	}

}
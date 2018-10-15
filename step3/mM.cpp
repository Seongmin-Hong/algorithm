#include<stdio.h>

int main() {
	int n,max, min;
	register int i;
	min = 100;
	max = 0;
	
	for (i = 1;i <= 7;i++) {
		scanf("%d", &n);
		if (n > max) max = n;
		if (n < min) min = n;

	}
	printf("%d %d", max, min);
}
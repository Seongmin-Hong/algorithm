#include<stdio.h>

int main() {
	double n,sum;
	register int i;
	
	sum = 0;

	for (i = 1;i <= 12; i++) {
		scanf("%lf", &n);
		sum += n;
	}
	printf("$%.2lf", sum / 12);
}
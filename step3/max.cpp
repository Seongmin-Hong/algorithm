#include<stdio.h>

int main() {
	int n,max;
	register int i;
	max = 0;

	for (i = 0;i <7 ;i++) {
		scanf("%d", &n);

		if (n > max) max = n;
	}
	printf("%d", max);
}

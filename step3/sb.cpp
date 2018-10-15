#include<stdio.h>

int main() {
	int n, max , check;
	register int i;
	max = 0;
	check = 0;

	for (i = 1;i <= 7;i++) {
		scanf("%d", &n);
		if (n > max) {
			check = i;
			max = n;
			
		}
	}
	printf("%d", check);
}
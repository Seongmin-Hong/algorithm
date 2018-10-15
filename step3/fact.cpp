#include<stdio.h>

int main() {
	int n,fact;
	register int i;

	fact = 1;

	scanf("%d", &n);

	for (i = 1; i<= n;i++) {
		fact *= i;
	}
	printf("%d", fact);
}
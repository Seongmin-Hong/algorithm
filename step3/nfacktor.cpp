#include<stdio.h>

int main() {
	int n,check;
	register int i;

	check = 0;

	scanf("%d", &n);
	for (i = 1;i <= n;i++) {
		if (n%i == 0) check++;
	}
	printf("%d", check);
}

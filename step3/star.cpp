#include<stdio.h>

int main() {
	int n;
	register int i;
	scanf("%d", &n);

	for (i = 0;i < n;i++) {
		printf("*");
	}
}

#include<stdio.h>

int main() {
	int n;
	int i, j;
	scanf("%d", &n);

	for (i = 1; i <= 6; i++) {
		for (j = 1; j <= 6; j++) {
			if (i + j == n) printf("%d %d\n", i, j);
		}
	}
}
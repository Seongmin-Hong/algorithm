#include<stdio.h>

int main() {
	int n,cnt=0;
	int i, j, k;

	scanf("%d", &n);

	for (i = 1; i < 100; i++) {
		for (j = 1; j < 100; j++) {
			if (i + j == n) cnt += 1;
		}
	}
	printf("%d", cnt);
}

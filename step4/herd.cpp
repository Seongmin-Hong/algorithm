#include<stdio.h>

int main() {
	int n , sum , cnt=0;
	int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		sum = 0;
		for (j = i; j <= n; j++) {
			if (n < sum) break;
			sum += j;
			if (sum == n) {
				cnt += 1;
				break;
			}

		}


	}
	printf("%d", cnt);
}
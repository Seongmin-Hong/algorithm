#include<stdio.h>

int main() {
	int arr[50000];
	int n, k;
	int c = 0, sum, flat = 0;
	register int i, j;

	scanf("%d %d", &n, &k);

	for (i = 2; i <= n; i++) {
		sum = 0;
		for (j = 0; j < c; j++) {
			if (i%arr[j] == 0) break;
		}
		if (j == c) {
			arr[c] = i;
			c++;
			if (c >= k) {
				for (j = c - 1; c - j - 1 < k; j--) {
					sum += arr[j];
				}
			}
		}
		if (sum == n) flat = 1;
		if (sum > n) break;
		
	}
	
	flat ? printf("yes") : printf("no");
}
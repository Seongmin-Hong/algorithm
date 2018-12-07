#include<stdio.h>

int main() {
	int n,k,m;
	int i, j;
	int sum;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		sum = 0;
		scanf("%d", &k);
		for (j = 1; j <= k; j++) {
			scanf("%d", &m);
			sum += m-1;

		}
		printf("%d\n", sum+1);
	}
	
}
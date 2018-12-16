#include<stdio.h>

int main() {
	int n, q ,i,j,sum;
	int hi,sj,ej;
	int a[1001];

	scanf("%d %d", &n, &q);
	for (i = 1; i <= n; i++) {
		scanf("%d", &hi);
		a[i] = hi;
	}
	for (i = 1; i <= q; i++) {
		sum = 0;
		scanf("%d %d", &sj, &ej);
		for (j = sj; j <= ej; j++) {
			sum += a[j];
			
		}
		printf("%d\n", sum);
	}



}

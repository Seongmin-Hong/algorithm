#include<stdio.h>

int main() {
	int n, k ,a=1, sum,cnt=0;
	int i, j;

	scanf("%d %d", &n, &k);

	for (i = k; i <= n; i++) {
		sum = 0;
		for (j = i; j >= a; j--) {
			sum += j;
		}
		if (sum%15 == 0) cnt += 1;
		a++;
	}
	printf("%d", cnt);


}

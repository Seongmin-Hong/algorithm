#include<stdio.h>

int main() {
	int n,sum1,sum2;
	int i, j,k;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		sum1 = 0;
		sum2 = 0;
		
		for (j = 1; j < i; j++) {
			if (!(i%j)) sum1 += j;
		}
		for (k = 1; k < sum1; k++)
			if (!(sum1%k)) sum2 += k;

		if (sum2 == i && sum1 != sum2
			&& sum2 < sum1) printf("%d %d\n", sum2, sum1);
	
	}

}
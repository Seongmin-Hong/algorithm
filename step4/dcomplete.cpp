#include<stdio.h>

int main() {
	int n,sum;
	int i, j;
	
	scanf("%d", &n);

	for (i = 6; i <= n; i++) {
		sum = 0;
		for (j = 1; j < i; j++) {
			if (!(i%j)) {
				sum += j;
			}	
		}
		if (sum == i) printf("%d\n", i);
	}

}
#include<stdio.h>

int main() {
	int a[9];
	int n, sum=0;
	int i, j,k;

	for (i = 0; i < 9; i++) {
		scanf("%d", &n);
		a[i] = n;
		sum += n;
	}
	sum -= 100;

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if (a[i]+a[j] == sum) {
				for (k = 0; k < 9; k++) {
					if (k != i && k != j) printf("%d\n", a[k]);
				}
			}
		}

	}

	


}
#include<stdio.h>

int main() {
	int n,m,i,j,t;
	int a[1001];
	int sum = 0;


	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		a[i] = m;
	}
	for (i = n - 1; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			if (a[j] > a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j + 1] = t;
			}

		}

	}

	for (i = 1; i <= n; i++) {
		if (a[i] != a[i + 1]) sum += 1;
	}
	printf("%d", sum);
}

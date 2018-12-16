#include<stdio.h>

int main() {
	int n, m, i ,avg =0;
	int a[50];
	int result=0;
	

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		a[i] = m;
		avg += m;
	}
	avg /= n;
	for (i = 1; i <= n; i++) {
		if (a[i] > avg) result += a[i] - avg;
	}
	printf("The minimum number of moves is %d.", result);

}
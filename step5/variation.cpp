#include<stdio.h>

int main() {
	int n, m, i;
	int a[100];
	double sum = 0 , avg = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		a[i] = m;
		avg += m;
	}
	avg /= 1.0*n;
	for (i = 1; i <= n; i++) {
		sum += (a[i]-avg) * (a[i] - avg);
		
	}

	printf("%.2lf", (1.0*sum) / n);
	
}
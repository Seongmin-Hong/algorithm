#include<stdio.h>

int main() {
	int n, m, i , sum =0 , avg = 0;
	int a[1000];
	double result = 0;
	

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		a[i] = m;
		avg += m;
	}
	
	avg /= (1.0*n);
	for (i = 1; i <= n; i++) {
		if (a[i] > avg) result += 1;
		
	}

	result = 1.0*result / n;
	printf("%.3lf%%", result * 100);

}

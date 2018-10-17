#include<stdio.h>

int main() {
	int n,m[1000],max=1,min=1000 , s_min=1000000;
	int a,x,y, sum;

	register int i,j,k;

	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &m[i]);
		if (m[i] > max) max = m[i];
		if (m[i] < min) min = m[i];
	}
	a = min + 17;
	for (j = a;j <= max; j++) {
		
		sum = 0;
		
		for (k = 0;k < n;k++) {
			
			if (m[k] >= j) {
				x = m[k] - j;
				sum += x * x;
			}
			if (m[k] <= j - 17) {
				y = (j - 17) - m[k];
				sum += y * y;
			}
			
		}
		if (s_min > sum) s_min = sum;
	}
	printf("%d", s_min);

}

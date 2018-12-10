#include<stdio.h>

int main() {
	int n ,m,i,j,t;
	int len , max=0;

	scanf("%d", &n);
	i = 1;

	while (1) {
		j = i;
		m = n;
		len = 2;

		while (1) {
			m -= j;
			if (m < 0) break;
			
			t = j;
			j = m;
			m = t;

			len += 1;
		}
		if (max < len) max = len;
		if (n == i) break;
		i+=1;
		
	}


	printf("%d", max);
}
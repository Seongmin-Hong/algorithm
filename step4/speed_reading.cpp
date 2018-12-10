#include<stdio.h>

int main() {
	int n, k , time;
	int Si, Ti, Ri, sum;
	int i,j;

	scanf("%d %d", &n, &k);

	for (i = 1; i <= k; i++) {
		scanf("%d %d %d", &Si, &Ti, &Ri);
		time = 0;
		sum = 0;
		while (1) {
			
			for (j = 1; j <= Ti; j++) {
				if (sum >= n) break;
				time += 1;
				sum += Si;
			}
			if (sum >= n) break;

			time += Ri;
				
			
				
		}
		printf("%d\n", time);

	}

}
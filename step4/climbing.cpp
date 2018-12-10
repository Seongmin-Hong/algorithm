#include<stdio.h>

int main() {
	int n, u, d ,a;
	int time;

	while (1) {
		time = 0;
		scanf("%d %d %d", &n, &u, &d);
		if (!(n + u + d)) break;
		a = n;

		while (1) {
			time += 1;

			if (time & 1) a -= u;
			else a += d;
			
			if (a <= 0) break;
		}

		printf("%d\n", time);
		
	}
	

}

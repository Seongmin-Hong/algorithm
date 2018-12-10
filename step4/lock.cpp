#include<stdio.h>

int main() {
	int n[4] , flat;
	int i;
	int r,k;
	
	while (1) {
		r = 0;
		k = 1;
		flat = 0;

		for (i = 0; i < 4; i++) {
			scanf("%d", &n[i]);
			flat += n[i];
		}
		if (!flat) break;
		
		for (i = 0; i < 3; i++) {
			r += (40 + k* (n[i] - n[i+1])) % 40;
			k *= -1;
		}
		
		r *= 9;
		r += 1080;
	
		printf("%d\n", r);


	}
	


}

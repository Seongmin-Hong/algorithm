#include<stdio.h>

int main() {
	int n, m, k,r;
	register int i;
	
	scanf("%d %d %d", &n, &m, &k);
	
	printf("0.");
	for (i = 1;i <=k;i++) {
		
		r = (10*n) / m;
		n = (10 * n) % m;
		printf("%d", r);
	}
	
}
/*
2 7
20 / 7 

*/
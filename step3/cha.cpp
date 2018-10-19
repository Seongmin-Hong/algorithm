#include<stdio.h>

int main() {
	int n, m, temp, r=1;
	register int i;

	scanf("%d %d", &n, &m);
	printf("%d %d ", n, m);
	for (i = 0;;i++) {
		r = n - m;
		if (r < 0) break;
		n = m;
		m = r;
		
		printf("%d ",r);
		
	}

}
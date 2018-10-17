#include<stdio.h>

int main() {
	int n ,m ,r, max = 0 ,min = 99;
	register int i;

	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &m);
		if (m > max) max = m;
		if (m < min) min = m;
		
	}
	r = (max - min) * 2;
	printf("%d", r);
}

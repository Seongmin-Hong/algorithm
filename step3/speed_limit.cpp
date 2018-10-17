#include<stdio.h>

int main() {
	int n, s,t , d=0 ,c=0;
	register int i;
	
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d %d", &s, &t);
		
		d += s * (t-c);
		c = t;
	
	}
	printf("%d miles", d);
}
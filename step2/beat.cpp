#include<stdio.h>

int main() {
	int s, d , a, b;
	scanf("%d %d", &s, &d);
	
	a = (s + d);
	b = (s - d);
	
	if (a & 1 == 1 || b<0 || b&1==1) {
		printf("impossible");
	} else printf("%d %d", a/2, b/2);

}
/*
	s = a + b
	d = a - b
	s+d = a+b + a-b
	a = s+d/2

*/
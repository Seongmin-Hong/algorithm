#include<stdio.h>

int main() {
	double c,s=0;
	register int i;

	scanf("%lf", &c);

	for (i = 1;;i++) {
		s += 1.0 / (i + 1);
		if (c <= s) break;
	}
	printf("%d card(s)", i);
}
/*
	1 / n+1

*/
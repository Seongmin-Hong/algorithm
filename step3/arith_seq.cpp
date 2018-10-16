#include<stdio.h>

int main() {
	int a, d, an , result;

	scanf("%d %d %d", &a, &d, &an);

	result = (an - a + d) / d;
	if (result*d == an - a + d) {
		printf("%d", result);
	}
	else printf("X");
	


}
/*
	an = a+ (n-1)d
	a + nd -d
	
	n = an - a + d / d
	5/2
*/
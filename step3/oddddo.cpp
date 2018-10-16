#include<stdio.h>

int main() {
	int n,sum=0 , a,b;
	register int i;

	scanf("%d", &n);
	for (i = 1; i <= n;i++) {
		a = (2 * i) - 1;
		b = (2 * n) +1 - (2*i) ;
		sum += a * b;
	}       
	printf("%d", sum);
}
/*
1 3 5 7  = 2i -1 
7 5 3 1  = -2i + 8 +  1


*/
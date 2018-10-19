#include<stdio.h>

int main() {
	int n,r;
	
	while (1) {
		scanf("%d", &n);
		if (!n) break;
	
		if (!(n&1)) printf("No Solution!\n");
		else printf("%d\n", n-1);
	}
}
/*
	3 - 2
	4 - 2
	5 - 2

	1 1 1 0 0 0 

	1 1 1 1 0 0 0 



*/
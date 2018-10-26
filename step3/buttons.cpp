#include<stdio.h>

int main() {
	int k, l;
	register int i;

	scanf("%d", &k);
	for (i = 3;i <= k;i++) {
		if (!(k%i)) {
			printf("%d", i - 1);
			break;
		}
	}
}
/*
 3 - 2
 4 - 3



 2 3 4


*/
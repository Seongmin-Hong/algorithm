#include<stdio.h>
int upstair(int x) {
	if (x == 1) return 1;
	if (x == 2) return 2;

	return upstair(x-1)+upstair(x-2);
}


int main() {
	int n;
	scanf("%d", &n);

	printf("%d", upstair(n));
}

/*
1 2 3
1 3
2 3

1 2 3 4
1 3 4
1 2 4


*/


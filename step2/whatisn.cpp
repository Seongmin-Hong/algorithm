#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if ((1 < n && n < 4) || (6 < n && n < 9)) {
		printf("2");
	}
	else if (3 < n && n < 7) {
		printf("3");
	}
	else printf("1");

}
/*
10 1
9 1
8 2
7 2
6 3
5 3 
4 3
3 2
2 2
1 1

*/
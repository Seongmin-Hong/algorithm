#include<stdio.h>

int main() {
	int n;
	int k = 1;
	register int i;

	for (i = 1;i <= 10000;i++) {
		n = i * i;
		if (i / k > 0) k *= 10;

		if (n% k == i) {
			printf("%d\n", i);
		}
	}
}
/*
	i 10���� 10 10^1
	i 100���� 100 10^2
	i 1000���� 1000 10^3
	i 10000 ���� 10000 10^4
	


*/
#include<stdio.h>

int fact(int x) {
	if (x == 0) return 1;
	return x * fact(x - 1);
}

int main() {
	int n, i, sum;
	int a;

	for (i = 145; i <= 1000000; i++) {
		sum = 0;
		n = i;
		while (1) {
			if (n == 0 || sum>i) break;
			a = n % 10;
			sum += fact(a);
			n /= 10;
		}



		if (sum == i) printf("%d\n", i);
	}



}
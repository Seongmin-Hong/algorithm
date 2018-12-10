#include<stdio.h>

int main() {
	int A, B, C;
	int sum1, sum2, ck;
	

	for (A = 1; A <= 9; A++) {
		for (B = 1; B <= 9; B++) {
			for (C = 1; C <= 9; C++) {
				sum1 = A * 100 + B * 10 + C;
				sum2 = C * 100 + C * 10 + A;

				ck = 1000 + A * 100 + B * 10 + 2;
				if (sum1 + sum2 == ck) printf("%d%d%d\n", A, B, C);
			}
		}
	}

}
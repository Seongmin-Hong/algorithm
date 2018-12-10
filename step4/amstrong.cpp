#include<stdio.h>

int main() {
	int a, b, c;
	int sum , ck;

	for (a = 1; a <= 9; a++) {
		for (b = 0; b <= 9; b++) {
			for (c = 0; c <= 9; c++) {
				sum = (a*a*a) + (b*b*b) + (c*c*c);
				ck = a * 100 + b * 10 + c;

				if (sum == ck) printf("%d%d%d\n", a, b, c);

			}
		}
	}

}
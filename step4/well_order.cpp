#include<stdio.h>

int main() {
	int a, b, c;
	int cnt = 0;

	for (a = 1; a <= 9; a++) {
		
		for (b = 2; b <= 9; b++) {
			for (c = 3; c <= 9; c++) {
				if (a < b && b < c) {
					printf("%d%d%d ", a, b, c);
					cnt += 1;
					if (cnt == 5) {
						printf("\n");
						cnt = 0;
					}
				}

			}
			
		}

	}
}
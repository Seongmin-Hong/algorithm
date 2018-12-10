#include<stdio.h>

int main() {
	int n,sum,cnt=0;
	int i, j,k,l;

	scanf("%d", &n);

	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			for (k = 1; k <= 3; k++) {
				for (l = 1; l <= 3; l++) {
					sum = 0;
					sum = i*1000 + j*100 + k*10 + l;
					if (sum%n == 0) cnt += 1;
				}
			}
		}
	}
	printf("%d", cnt);
}

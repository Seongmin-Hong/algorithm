#include<stdio.h>

int main() {
	int a[20];
	int n, i,j, t;
	int flag;

	for (i = 0; i < 20; i++) {
		scanf("%d", &n);
		a[i] = n;
	}
		
	for (i = 20 - 2; i >= 0; i--) {
		flag = 0;
		for (j = 0; j <= i; j++) {
			if (a[j] < a[j + 1]) {
				flag = 1;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		
		}
		if (!flag) break;
	}
		
	printf("%d\n", a[0] + a[1]);
	printf("%d %d", a[0], a[1]);

}
//-23 -28 0 16 14 -15 0 4 1 -17 -6 17 24 -19 29 -3 4 -16 18 24
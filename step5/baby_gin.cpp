#include<stdio.h>


int main() {
	int n, i, j, k, flag;
	int t, sum = 0;
	int a[6];

	for (i = 0; i < 6; i++) {
		scanf("%d", &n);
		a[i] = n;
	}
	for (i = 6 - 2; i >= 0; i--) {
		flag = 0;
		for (j = 0; j <= i; j++) {
			if (a[j] > a[j + 1]) {
				flag = 1;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}

		}
		if (!flag) break;
	}

	for (i = 0; i < 6; i++) {
		if (sum == 2) break;
		flag = 0;
		for (j = i + 1; j < 6; j++) {
			if (flag) break;
			for (k = j + 1; k < 6; k++) {
				if (a[i] == a[j] && a[j] == a[k]) {
					sum += 1;
					i = k;
					flag = 1;
					a[i] = NULL;
					a[j] = NULL;
					a[k] = NULL;
					break;
				}
				else if (a[k] - a[j] == 1 && a[j] - a[i] == 1) {
					sum += 1;
					flag = 1;
					a[i] = NULL;
					a[j] = NULL;
					a[k] = NULL;
					break;
				}


			}
		}
			
			

	}
	if (sum == 2) printf("gin");
	else printf("lose");
}
// 0 1 1 1 2 3
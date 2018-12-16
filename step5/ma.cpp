#include<stdio.h>

int main() {
	int n, i=0,j,k;
	int a[30];

	while (1) {
		scanf("%d", &n);
		if (!n) break;
		a[i] = n;
		i++;
	}
	for (j = 8; j >=0; j--) {
		for (k = 0; k < i; k++) {
			if (a[k] > j) printf(" *");
			else printf("  ");
		}
		printf("\n");
	}
	for (j = 0; j < i; j++) printf(" %d", a[j]);

}

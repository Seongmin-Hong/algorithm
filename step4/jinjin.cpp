#include<stdio.h>

int main() {
	int n,a,b,r;
	int i;
	int max =0,flat = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		if (a + b > 8) flat = 1;

		if (max < a + b) {
			max = a + b;
			r = i;
		}


	}
	if(flat) printf("%d",r);
	else printf("0");
}

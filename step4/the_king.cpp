#include<stdio.h>
#include<math.h>

int main() {
	int n, m, k ,sum=0;
	int i,j;
	int r;

	scanf("%d %d", &n,&m);

	for (i = 1; i <= n; i++) {
		scanf("%d", &k);
		r = pow(k, m);
		if (r > 0)
			sum += r;

	}
	printf("%d", sum);

}
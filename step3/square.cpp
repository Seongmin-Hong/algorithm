#include<stdio.h>
#include<math.h>

int main() {
	int n, m , sum= 0 ,min=987654;
	register int i;

	scanf("%d %d", &n, &m);
	for (i = 0;i <= 10000;i++) {
		if (n<=i*i && i*i<=m) {
			sum += i*i;
			if (sum < min) min = sum;
		}
	}
	if (!sum) printf("-1");
	else printf("%d\n%d", sum,min);
}
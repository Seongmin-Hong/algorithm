#include<stdio.h>

int main() {
	double n,m,result, temp;
	register int i;

	scanf("%lf", &m);

	for (i = 0;i <= i + 1;i++) {
		scanf("%lf", &n);
		if (n == 999) {
			printf("End of Output");
			break;
		}
		

		result = n - m;
		temp = n;
		n = m;
		m = temp;

		printf("%.2lf\n", result);
	}
}
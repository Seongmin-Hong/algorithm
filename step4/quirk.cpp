#include<stdio.h>
#include<math.h>

int main() {
	int n,m,t;
	int a, b;
	int i;

	scanf("%d", &n);
	m = pow(10, n);
	t = pow(10, n / 2);
	for (i = 0; i < m; i++) {
		b = i % t;
		a = i / t;
		if (a+b == sqrt(i)) {
			printf("%0*d\n", n, i);
		}
		
	}

}

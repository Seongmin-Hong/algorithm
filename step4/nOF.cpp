#include<stdio.h>

int main() {
	int n, m ,sum=0;

	scanf("%d %d", &n, &m);

	while (n) {
		sum += n / m;
		n /= m;
	}
	printf("%d", sum);
}
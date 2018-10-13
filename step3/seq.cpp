#include<stdio.h>


int main() {
	int n,m,temp;
	register int i;
	scanf("%d %d", &n , &m);

	if (n > m) {
		temp = n;
		n = m;
		m = temp;
	}
	for (i = n;i <= m;i++) {

		printf("%d ", i);
	}
}

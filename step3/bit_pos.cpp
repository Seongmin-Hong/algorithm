#include<stdio.h>

int main() {
	int n,m;
	register int i;

	scanf("%d", &n);
	m = n;
	for (i = 0;i<=n;i++) {
		if (!m) break;
		if(m&1) printf("%d ", i);
		m /= 2;
	}
}

#include<stdio.h>

int main() {
	int m, n, q;
	scanf("%d %d", &m, &n);

	if (m==0) {
		printf("%d !| %d", m, n);
	}
	else if (n%m == 0 || n==0) {
		printf("%d | %d", m, n);
	}
	else {
		printf("%d !| %d", m, n);
	}

}

/*
	m = n x q
*/
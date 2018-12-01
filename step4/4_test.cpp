#include<stdio.h>
int max(int n, int m) {
	if (n < m) return m;
}

int main() {
	int n, m , t;
	int a[10]{ 0, };
	int b[10]{ 0, };
	int i=0 ;

	scanf("%d %d", &n ,&m);
	max(n, m);
	
	while (1) {
		a[i] = n%2;
		n /= 2;

		b[i] = m % 2;
		m /= 2;

		
		if (!n) break;
		i++;
	}
	t = i;
	while (t) {
		if (a[t] != b[t]) break;
		t--;
	}
	printf("%d", (t+1)*2);
}
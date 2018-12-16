#include<stdio.h>

int main() {
	int a[1000];
	int n,m,i;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		a[i] = m;
	}
	
	for (i = n-1; i >= 0; i--) printf("%d ", a[i]);



}
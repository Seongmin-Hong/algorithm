#include<stdio.h>

int main() {
	int a[6], b[6]{1,1,2,2,2,8};
	int n,i;

	for (i = 0; i < 6; i++) {
		scanf("%d", &n);
		a[i] = n;
	}
	for (i = 0; i < 6; i++)
		printf("%d ", b[i] - a[i]);



}
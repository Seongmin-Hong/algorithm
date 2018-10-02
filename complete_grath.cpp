#include<stdio.h>

int main() {
	int n, result;
	scanf("%d", &n);

	result = n*0.5*(n-1);
	printf("%d", result);

}
/*
2 = 1 0.5 
3 = 3 1
4 = 6 1.5 
5 = 10 2
*/
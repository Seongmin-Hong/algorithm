#include<stdio.h>

int main() {
	int k, n ,result;
	scanf("%d %d", &k, &n);

	result = ((n-k)/(k-1))+1;
	printf("%d", result*100);

}
/*
	1번 분열시 k개
	2번시 k+ k-1
	3  k + k-1  k-1 2(k-1) +k
	4  k + k-1 k-1 k-1 3(k-1)
	n = k + (N-1) * (k-1)

	N 횟수

	result = 
	
*/


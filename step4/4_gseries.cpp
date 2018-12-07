#include<stdio.h>

int main() {
	int n , sum=0;
	int i,j;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		for (j = i; j >= 1; j--) sum += j;
	}
	printf("%d", sum);




}
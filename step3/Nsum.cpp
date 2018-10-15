#include<stdio.h>

int main() {
	int n  ,i , sum;
	
	sum = 0;
	i = 1;
	
	scanf("%d", &n);

	while (n != sum) {
		sum += i;
		i++;
	}
	printf("%d", i-1);
}
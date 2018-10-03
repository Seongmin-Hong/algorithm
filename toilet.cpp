#include<stdio.h>

int main() {
	int n , min , max;
	scanf("%d", &n);
	
	max = ((n-1)/2)+1;
	min = ((n-1)/3)+1;


	printf("%d %d", max, min);

}
/*
7 -4
6- 4
5 - 3
4 - 2
3 - 2
2- 1
1- 1

5 - 2
6 - 2
7 - 3

*/
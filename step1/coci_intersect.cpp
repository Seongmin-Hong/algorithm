#include<stdio.h>

int main() {
	int n, result;
	scanf("%d", &n);
	
	result = n*(n-1)*(n-2)*(n-3)/24;
	printf("%d", result);

}
/*
3 - 0
4 - 1       
5 - 5       
6 - 15		
7 - 
n-3 n-2 n-1 n
1  2    3   4 24 / 24 1   
2   3     4    5      5
3   4    5    6   / 24 15
4   5    6    7   / 24            840 / 24  35
n-3
n-3
n-0
n+



*/
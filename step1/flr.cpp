#include<stdio.h>
#include<math.h>

int main() {
	int n, result;
	

	scanf("%d", &n);

	result = log2(n) + 1;

	printf("%d", result);

}
/*

2< 2=n <3         2(n-1)^ <= n < 2n	
4< 3=n <7			n-1 <= log2(n) < n
8< 4=n <15			n <= log2(n)+1 < n+1
16<5=n <31

*/
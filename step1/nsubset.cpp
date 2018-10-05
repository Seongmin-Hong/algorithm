#include<stdio.h>

int main() {
	long long int n, m , i,result;
	i = 0;
	result = 1;

	scanf("%lld %lld", &n, &m);
	
	while (i < n) {
		result *= m;
		i++;
	}

	printf("%lld", result);

}
/*

*/
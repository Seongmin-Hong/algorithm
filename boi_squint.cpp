#include<stdio.h>
#include<math.h>

int main() {
	unsigned long long int n, result,c;
	scanf("%llu", &n);

	result = sqrt(n);
	c = result * result;
	if (c != n) result++;
	printf("%llu", result);
}
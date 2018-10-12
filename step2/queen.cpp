#include<stdio.h>

int main() {
	long long int n, m ,queen;
	scanf("%lld %lld", &n, &m);

	queen = n > m ? m : n;
	printf("%lld", queen);

}

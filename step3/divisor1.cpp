#include<stdio.h>
#include<math.h>
#define DIVISOR 1000000003

typedef long long int lld;
int main() {
	lld a, b ,i , sum = 0;
	int cnt = 0;
	int r = DIVISOR;
	double s_a , s_b;

	scanf("%lld %lld", &a, &b);
	s_a = sqrt(a);
	s_b = sqrt(b);
	
	s_a += 0.9;

	for (i = s_a; i <= s_b; i++) {
		sum += i*i;
		cnt += 1;
	}
	
	printf("%d %d", cnt, sum%r);
}

#include<stdio.h>

int gcd(long long int x,long long int y) {
	long long int temp;
	while (y != 0) {
		temp = x % y;
		x = y;
		y = temp;
	}
	return x;
}

int main() {
	long long int w, l;
	long long int a,b,lcm, result;
	scanf("%lld %lld", &w, &l);
	
	if (gcd(w, l) == 1) result = w * l;
	else result = (w * l) / (gcd(w, l) * gcd(w, l));
	printf("%lld", result);
}

/*
(w*l/gcd * w*l/gcd) / w*l

w*l/gcd * w*l/gcd * w*i/1

302348 234211

*/

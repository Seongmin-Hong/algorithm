#include<stdio.h>

typedef long long int ll;
ll gcd(ll x, ll y) {
	if (y == 0) return x;
	else return gcd(y, x%y);
}
ll lcm(ll x, ll y) {
	return (x*y) / gcd(x, y);
}

int main() {
	ll a, b;
	scanf("%lld %lld", &a, &b);
	
	printf("%lld %lld", gcd(a, b), lcm(a,b));

}
#include <stdio.h>
typedef long long int ll;
ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}
int main()
{
	ll a, b;
	scanf("%lld %lld", &a, &b);
	ll ans1 = gcd(a, b);
	ll ans2 = (a * b) / ans1;
	printf("%lld %lld", ans1, ans2);
	return 0;
}
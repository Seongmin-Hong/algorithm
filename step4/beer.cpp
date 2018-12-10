#include<stdio.h>
typedef long long int lld;

int main() {
	
	lld min = 987654321987654321;
	lld n,s,W, L, H;
	lld a, b, c;
	
	scanf("%lld", &n);

	for (W = 1; W*W <= n; W++) {
		if (!(n%W)) {
			for (L = 1; L <= n; L++) {
				H = n / (W*L);
				s = W + L + H;
				if (H < L) break;

				if (W*H*L == n)
					if (min > s) {

						min = s;
						a = W;
						b = L;
						c = H;
					}
			}

		}
	}

	printf("%lld %lld %lld", a,b,c);


}

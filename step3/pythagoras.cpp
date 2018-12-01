#include<stdio.h>
#include<math.h>

typedef long long int lld;

int main() {
	lld c;
	lld a, b;
	register int i;

	scanf("%lld", &c);
	
	for (i = 1; i <= c; i++) {

		a = i;
		b = (c*c) - (a*a);
		b = sqrt(b);

		if ((a*a) + (b*b) == (c*c)) break;
	}
	
	if(b!=0) printf("%lld %lld", a, b);
	else printf("impossible");


}
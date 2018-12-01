#include<stdio.h>


int main() {
	int n, x, y , result;
	int r1=0,r2=0,r3=0,r4=0 ;
	register int i;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		
		if (!(x&1) && !(y&1)) r1 += 1;
		else if (x & 1 && !(y & 1)) r2 += 1;
		else if (x & 1 && y & 1) r3 += 1;
		else r4 += 1;
	}

	r1 = (r1*(r1 - 1)) / 2;
	r2 = (r2*(r2 - 1)) / 2;
	r3 = (r3*(r3 - 1)) / 2;
	r4 = (r4*(r4 - 1)) / 2;

	result = r1 + r2 + r3 + r4;

	printf("%d", result);

}

#include<stdio.h>
#include<math.h>

int main() {
	int n,c=0;
	register int i;

	scanf("%d", &n);
	for (i = 1;i <= n;i++) {
		if (!(n%i)) c++;
	}

	if (n == sqrt(n*n) && (c&1)) printf("yes");
	else printf("no");
}
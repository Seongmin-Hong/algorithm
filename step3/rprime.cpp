#include<stdio.h>

int main() {
	int n,m,c=0;
	register int i;

	scanf("%d %d", &n, &m);

	for (i = 1;i <= 1000;i++) {
		if (!(n%i) && !(m%i)) c++;
	}
	if (c++ == 1) printf("yes");
	else printf("no");

}
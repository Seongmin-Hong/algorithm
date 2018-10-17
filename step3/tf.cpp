#include<stdio.h>

int main() {
	int n , o , p =0;
	register int i;

	scanf("%d", &n);
	for (i = 1;;i++) {
		if (n % 2 == 1) {
			o = n;
			break;
		}

		n /= 2;p++;
		
	}
	printf("%d %d", o, p);
}
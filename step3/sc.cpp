#include<stdio.h>

int main() {
	int n;
	int a=0, b=0, c=0, d=0, f=0 , p=0;
	register int i;
	for (i = 1;;i++) {
		scanf("%d", &n);
		if (n == -1)break;
		p++;
		n /= 10;
		switch (n) {
		case 10:
		case 9:a++;break;
		case 8:b++;break;
		case 7:c++;break;
		case 6:d++;break;
		default:f++;break;
		}
	}
	printf("%d\n", p);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", f);

}
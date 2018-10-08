#include<stdio.h>

int main() {
	int a, b, c, d ,x,result;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a > b) {
		x = b;
		b = a;
		a = x;
	}
	if (a > c) {
		x = c;
		c = a;
		a = x;
	}
	if (a > d) {
		x = d;
		d = a;
		a = x;
	}
	if (b > c) {
		x = c;
		c = b;
		b = x;
	}
	if (b > d) {
		x = d;
		d = b;
		b = x;
	}
	if (c > d) {
		x = d;
		d = c;
		c = x;


	}
	result = a*c;

	printf("%d", result);
}
/*

a<b< c< d

최대면적 = 두번째 큰수 * 젤 작은수
a b
a c
a d
b c
b d
c d


*/
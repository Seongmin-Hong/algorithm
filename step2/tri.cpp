#include<stdio.h>

int main() {
	int a, b, c, x;
	scanf("%d %d %d", &a, &b, &c);

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
	if (b > c) {
		x = c;
		c = b;
		b = x;
	}
	if (a + b > c) {
		printf("yes");
	}
	else printf("no");
}
/*
제일큰변의 길이가 두변의 길이의 합보다 작아야한다
*/
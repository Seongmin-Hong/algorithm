#include<stdio.h>
#define SWAP(x,y){int temp; temp = y; y = x; x = temp;}

int main() {
	int a,b,c,d;

	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) SWAP(a,b);
	if (a > c) SWAP(a,c);
	if (b > c) SWAP(b,c);
	
	if (c - b == b - a) {
		d = (2 * c) - b ;
	}
	else if (c - b == 2 * (b - a)) {
		d = c - (b-a);
	}
	else if (c-b == (b-a)/2) {
		d = a + (c-b);
	}
	printf("%d", d);
}
/*
1 3 5 (7)
1 3 (5) 7
1 (3) 5 7

*/
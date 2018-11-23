#include<stdio.h>

int main() {
	int a, b, c, d, e;
	int sum , flat;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	sum = a + b + c + d + e;
	if (sum > 10) printf("time out");
	else {
		sum = 0;
		sum = (a * 10) + (b * 15) + (c * 30) + (d * 40) + (e * 45);
		if (sum < 100) printf("game over");
		else printf("you win");
	}

}
#include<stdio.h>

int main() {
	int S, x, y, dx, dy, rx ,ry;
	int a=0, b=0;
	register int i=0;

	scanf("%d %d %d %d %d", &S, &x, &y, &dx, &dy);
	if ((S == dx && S >= dy) || (S == dy && S >= dy) || 
		 (x==y && dx==dy)) 
		printf("The flea cannot escape from black squares.");

	else {
		while (1) {

			if ((a + b) & 1 && rx%S != 0 && ry%S != 0) break;

			rx = x + (i*dx);
			ry = y + (i*dy);

			a = rx / S;
			b = ry / S;
			a *= 1;
			b *= 1;
			i++;
		}


		printf("After %d jumps the flea lands at (%d, %d).", i - 1, rx, ry);
	}
	}   
/*
Èò»ö (2,1) (1,2)
13 7 7 11 11

*/
#include<stdio.h>
#define SWAP(x,y){int temp; temp = y; y = x; x = temp;}

int main() {
	int n, x[4], y[4];
	int	x1[1], y1[1], t;
	int r,result=0;

	register int i,j;
	scanf("%d", &n);
	while (1) {
		if (n == 6174) break;

		for (i = 0;i < 4;i++) {
			x[i] = n % 10;
			y[i] = x[i];
			n /= 10;
		}
		if (x[0] < x[1]) SWAP(x[0], x[1]);
		if (x[0] < x[2]) SWAP(x[0], x[2]);
		if (x[0] < x[3]) SWAP(x[0], x[3]);
		if (x[1] < x[2]) SWAP(x[1], x[2]);
		if (x[1] < x[3]) SWAP(x[1], x[3]);
		if (x[2] < x[3]) SWAP(x[2], x[3]);

		if (y[0] > y[1]) SWAP(y[0], y[1]);
		if (y[0] > y[2]) SWAP(y[0], y[2]);
		if (y[0] > y[3]) SWAP(y[0], y[3]);
		if (y[1] > y[2]) SWAP(y[1], y[2]);
		if (y[1] > y[3]) SWAP(y[1], y[3]);
		if (y[2] > y[3]) SWAP(y[2], y[3]);

		t = 1;
		x1[0] = 0;
		y1[0] = 0;
		for (j = 0;j < 4;j++) {
			
			x1[0] += x[j] * t;
			y1[0] += y[j] * t;
			t *= 10;
		}
		r =  y1[0] - x1[0];
		n = r;
		result++;
	}
	printf("%d", result);
}
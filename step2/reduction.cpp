#include<stdio.h>
#define SWAP(x,y) {int a; a=x; x=y; y=a;}

int main() {
	int x, y, x1, y1, a,a1;
	double r1,r2,result;
	scanf("%d %d %d %d", &x, &y, &x1, &y1);

	if (x < y) 	SWAP(x, y);
	if (x1 < y1) SWAP(x1, y1);
	
	r1 = ((double)x1 / x) ;
	r2 = ((double)y1 / y) ;

	
	result = r1*y <= y1 ? r1 : r2;
	if (result > 1) result = 1;

	
	result *= 100;
	
	printf("%d%%", (int)result);

}

/*
	x = x1
	
	
	2 * 30 <= 46

	44 30 92 46

	2 * 30 <= 46
	1.5



	r1 * x = x1
	r1 * y <= y1
	0.5 400 <= 218

	0.38*y <= 1
	 3 <= 1

	 3.5*10



*/
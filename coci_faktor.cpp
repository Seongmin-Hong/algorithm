#include<stdio.h>

int main() {
	double x, y, result;
	scanf("%lf %lf", &x, &y);
	
	
	result = ((y - 0.99) * x)+1;


	printf("%d", (int)result);


}
/*
	result / x = 23.53 + 0.9 (y)
	result = x * y


	
	x   /   y  =  y(z - 0.9) / 1
	x  = y(z - 0.9) / 1
	


*/
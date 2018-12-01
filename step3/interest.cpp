#include<stdio.h>

int main() {
	int R,Y,result ;
	double M;
	register int i;

	scanf("%d %lf %d", &R, &M, &Y);

	for (i = 1; i <= Y; i++) {

		M += M * (R / 100.0);
		

	}
	result = (int)M;

	printf("%d", result);
}
#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c;
	double D ,result1 , result2;
	scanf("%d %d %d", &a, &b, &c);

	D = (b*b) - (4.0*a*c);

	result1 = (-b + sqrt(D)) / (2 * a);
	result2 = (-b - sqrt(D)) / (2 * a);

	if (D > 0) {
		printf("2\n");
		printf("%.3lf %.3lf", result2, result1);
	}
	else if (D == 0) {
		printf("1\n");
		printf("%.3lf", result1);
	}
	else {
		printf("0");
	}
	
}
/*
	근의 공식
	n = (b*b)-(4*a*c)
	-b + sqrt(n)

	84899x^2 + 43871x + 16487 = 0
	
	
	*/
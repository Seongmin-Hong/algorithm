#include<stdio.h>

int main() {
	int a, b, c;
	double result;
	scanf("%d %d %d", &a, &b, &c);

	result = a + (a * (b/100.0));
	result = result - (result*(c / 100.0));
	result -= a;
	
	if (result < 0) {
		printf("loss");
	} else 
		printf("%0.lf", result);


}

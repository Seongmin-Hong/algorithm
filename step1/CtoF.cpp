#include<stdio.h>

int main() {
	int celsius;
	float fahrenheit;

	scanf("%d", &celsius);
	fahrenheit = (9.0 / 5.0 * celsius) + 32;

	printf("%.1f", fahrenheit);


}

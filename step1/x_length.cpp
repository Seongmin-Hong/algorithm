#include<stdio.h>
#include<math.h>

int main() {
	int a, b;
	double pi, len, straight, curve, sq;

	pi = 3.14159;
	scanf("%d %d", &a, &b);

	curve = (a + b) * pi;
	sq = sqrt(2);
	straight = sq*(a + b);
	
	len = curve + straight;
	
	printf("%.3lf", len);

}

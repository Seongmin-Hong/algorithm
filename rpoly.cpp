#include<stdio.h>
#include<math.h>

int main() {
	double r, pi, area, radian, s;
	int n;

	scanf("%lf %d", &r, &n);

	pi = acos(-1);
	radian = pi / 180;
	s = 360 / (double)n;

	area = 0.5 * r * r * n * sin(s*radian);

	printf("%.3lf", area);

}
#include<stdio.h>
#include<math.h>

int main() {
	int a, b ,x,y,t;
	register int i;

	scanf("%d %d", &a, &b);

	t = (a * a) - (4 * b);
	t = sqrt(t);

	x = (-a + t) / 2;
	y = (-a - t) / 2;

	if (x*y!=b) printf("impossible");
	else printf("(x%d)(x%d)", x, y);

}

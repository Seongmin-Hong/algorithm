#include<stdio.h>

int main() {
	int x;
	double y;
	scanf("%d %lf", &x, &y);

	if (x % 5 == 0 && y>=x+0.5) {
		printf("%.2f", y - (x + 0.5));
	}
	else printf("%.2f", y);
}
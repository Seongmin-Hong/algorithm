#include<stdio.h>

int main() {
	int x, y, result;

	scanf("%d %d", &x, &y);
	if (x - y < 3 && x>=y) {
		if (!(x & 1) && !(y & 1)) {
			printf("%d", x + y);
		}
		else if (x & 1 && y & 1) {
			printf("%d", x + y - 1);
		}
		else printf("No Number");
	}
	else printf("No Number");
}

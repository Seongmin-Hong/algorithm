#include<stdio.h>

int main() {
	int n;
	int can_drink, bin;

	scanf("%d", &n);

	can_drink = n + (n/4) + (n/16);
	bin = (n % 4) + ((n / 4) % 4);

	printf("%d %d", can_drink, bin);

}

#include<stdio.h>

int main() {
	int a, day, hour, min, sec;

	scanf("%d", &a);

	day = a / (3600 * 24);
	hour = a % (3600 * 24) / 3600;
	min = a % (3600 * 24) % 3600 / 60;
	sec = a % (3600 * 24) % 3600 % 60;

	printf("%d %d %d %d", day, hour, min, sec);

}
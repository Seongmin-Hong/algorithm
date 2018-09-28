#include<stdio.h>

int main() {
	int hour, min, sec, a;
	scanf("%d%d%d%d", &hour, &min, &sec, &a);

	sec = sec + (a % 3600 % 60);
	if (sec >= 60) {
		min ++;
		sec = sec % 60;
	}

	min = min + (a % 3600 / 60);
	if (min >= 60) {
		hour ++;
		min = min % 60;
	}

	hour = hour + (a / 3600);
	if (hour >= 24) {
		hour = hour % 24;
	}
	
	printf("%d %d %d", hour, min, sec);

}
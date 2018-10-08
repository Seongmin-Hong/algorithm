#include<stdio.h>

int main() {
	int year;
	scanf("%d", &year);
	
	if (year % 8 == 0 && year >= 2000) {
		printf("O");
	}
	else printf("X");
}
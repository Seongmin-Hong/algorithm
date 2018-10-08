#include<stdio.h>

int main() {
	int a, b, c, result;
	scanf("%d %d %d", &a, &b, &c);

	result = c - (b + 1);

	if (c - b < b - a) {
		result = b - (a + 1);
	}
	
	printf("%d", result);
}
/*
 c-b < b-a ¹Ý´ë·Î



*/
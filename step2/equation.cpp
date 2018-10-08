#include<stdio.h>

int main() {
	int a, b, c, d, result;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (a == c && b == d) {
		printf("many");
	}
	else if (a == c && b != d) {
		printf("none");
	}
	else {
		printf("%.3lf", (double)(d - b) / (a - c));
	}
}
/*
ax + b = cx + d





*/
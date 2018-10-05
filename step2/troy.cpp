#include<stdio.h>

int main() {
	int t, w;
	scanf("%d %d", &t, &w);
	
	if (t * 1000 <= w) {
		printf("O");
	}
	else {
		printf("X");
	}
}
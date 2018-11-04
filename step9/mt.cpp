#include<stdio.h>

void mt(int x , int y) {
	
	if (y != x) { 
		printf("%d", y);
		mt(x, y + 1);
		
	}
	printf("%d", y);
	
}

int main() {
	int n;
	scanf("%d", &n);

	mt(n,1);
}
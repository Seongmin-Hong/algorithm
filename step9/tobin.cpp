#include<stdio.h>
void tob(int x) {
	
	if (x != 1) tob(x/2);
	printf("%d", x % 2);
	
}

int main() {
	int n;
	scanf("%d", &n);
	
	tob(n);
}
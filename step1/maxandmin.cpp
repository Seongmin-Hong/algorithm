#include<stdio.h>

int main() {
	int x, y;
	
	scanf("%d %d", &x, &y);

	printf("%d", max(min(x,y),x));
}
int min(int x, int y) {
	if (x < y)
		return x;
	else
		return y;
}
int max(int a, int y) {
	if (a < y) 
		return y;

	else 
		return a;
}
#include<stdio.h>

int pow(int x, int y) {
	if (y == 1) return x;
	return x*pow(x,y-1);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d",pow(a, b));
	

}
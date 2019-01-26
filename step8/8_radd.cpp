#include<stdio.h>


int Radd(int x) {
	int rev = 0;
		while (x) {
			rev = (rev * 10) + (x % 10);
			x /= 10;
	}
	return rev;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", Radd(Radd(a) + Radd(b)));

}
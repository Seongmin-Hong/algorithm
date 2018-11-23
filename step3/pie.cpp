#include<stdio.h>

int GCD(int x, int y) {
	if (y == 0) return x;
	else return GCD(y, x%y);
}


int main() {
	int a1, b1 , a2, b2;
	int r ,m,t;

	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);

	m = b1 * b2;
	r = m - ((b1*a2) + (a1*b2));
	t = GCD(r, m);

	if (r <= 0) printf("0");
	else printf("%d/%d", r/t, m/t);


}

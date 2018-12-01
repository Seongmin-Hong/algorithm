#include<stdio.h>

int GCD(int x, int y){
	if (y == 0) return x;
	return GCD(y, x%y);
}

int main() {
	int a, b ,d;
	int r, r1, r2 ,cnt = 0;
	int q[50] = { 0 };
	int s[50] = { 1,0 };
	int t[50] = { 0,1 };
	register int i, j;

	scanf("%d %d", &a, &b);
	d = GCD(a, b);
	r = a;
	r1 = b;
	
	while (r1 >= 1) {
		q[cnt + 1] = r / r1;
		r2 = r % r1;
		if (cnt >= 2) {
			s[cnt] = s[cnt - 2] - q[cnt - 1] * s[cnt - 1];
			t[cnt] = t[cnt - 2] - q[cnt - 1] * t[cnt - 1];
		}
		r = r1;
		r1 = r2;
		cnt++;
	}
	s[cnt] = s[cnt - 2] - q[cnt - 1] * s[cnt - 1];
	t[cnt] = t[cnt - 2] - q[cnt - 1] * t[cnt - 1];

	a != b ? printf("%d %d ", s[cnt], t[cnt]) : printf("0 1 ");
	printf("%d", d);
}

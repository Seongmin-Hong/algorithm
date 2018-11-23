#include<stdio.h>

int main() {
	int n, d, cnt = 0;
	int L, M, R ,t = 1;

	register int i;

	scanf("%d %d", &n, &d);

	for (i = 0; i < 9; i++) {
		L = n / (t*10);
		M = (n / t) % 10;
		R = n % t;

		if (!L && !M) break;

		if (M < d) cnt += L * t;
		else if (M > d) cnt += (L + 1) * t;
		else cnt += L * t + R + 1;

		if (d == 0) cnt -= t;
		t *= 10;
	}
	printf("%d", cnt);


}

/*

	int n, d, cnt=0;
	int L, M, R;

	register int i;

	scanf("%d %d", &n, &d);

	for (i = 0; i < 9; i++) {
		L = n / (int)pow(10, i + 1);
		M = n / (int)pow(10, i) % 10;
		R = n % (int)pow(10, i);

		if (!L && !M) break;

		if (M < d) cnt += L * (int)pow(10, i);
		else if (M > d) cnt += (L + 1) * (int)pow(10, i);
		else cnt += L * (int)pow(10, i) + R + 1;

		if (d == 0) cnt -= (int)pow(10, i);
	}
	printf("%d", cnt);

}

int n, d, m;
	int cnt = 0, t = 10;
	register int i;

	scanf("%d %d", &n, &d);

	for (i = 1; i <= n; i++) {
		m = i;
		while (m) {
			if (m % 10 == d) cnt += 1;
			m / 10;
		}

	}
	printf("%d", cnt);

*/
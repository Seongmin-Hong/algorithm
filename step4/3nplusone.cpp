#include<stdio.h>

int main() {
	int n, m ,r;
	int i,t;
	int max = 0 , cnt;

	scanf("%d %d", &n, &m);

	if (n > m) {
		t = n;
		n = m;
		m = t;
	}

	for (i = n; i <= m; i++) {
		cnt = 0;
		r = i;

		while (1) {
			cnt += 1;
			if (r == 1) break;

			if (r & 1) r = (r * 3) + 1;
			else r /= 2;

			

		}
		
		if (max <= cnt) max = cnt;

	}

	printf("%d", max);
}
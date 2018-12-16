#include<stdio.h>

int main() {
	int top[51]{0,};
	int shuf[51]{0,};
	int card[51]{ 0, };
	int temp[51]{ 0, };


	int n, r,i,j,s,e;
	int t,k,a;

	while (1) {
		scanf("%d %d", &n, &r);
		if (!(n + r)) break;
		for (i = 1; i <= n; i++) card[i] = i;
		for (i = 1; i <= r; i++) {
			scanf("%d %d", &s, &e);
			t = 1;
		
			for (k = n + 1 - s; k >= 1; k--) {
				shuf[t] = card[k];
				if (t == e) break;
				t++;
			}
			t = 1;
			a = e;
			for (k = 1; k <= n; k++) {
				if (card[k] != shuf[a]) {
					temp[t] = card[k];
					t++;
					}
				else {
					a--;
				}
			}
			a = e;
			for (k = n+1 - e; k <= n; k++) {
				temp[k] = shuf[a];
				a--;
			}
			for (j = 1; j <= n; j++) 
				card[j] = temp[j];
			
		}
		printf("%d\n", card[n]);
	}
}

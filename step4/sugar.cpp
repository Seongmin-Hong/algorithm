#include<stdio.h>

int cnt = 0;

int sugar(int x, int c) {
	if (cnt) return 1;
	if (x < 0) return 1;
	
	if (!x && !cnt) {
		cnt = c;
	}
	sugar(x - 5, c + 1);
	sugar(x - 3, c + 1);

	return cnt;

}


int main() {
	int n , c=0;
	
	scanf("%d", &n);
	
	sugar(n, c);

	if (!cnt) printf("-1");
	else printf("%d", cnt);
	

}

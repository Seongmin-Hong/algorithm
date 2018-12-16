#include<stdio.h>

int main() {
	int n, m ,i,j;
	int x, y ,a,b;
	int max = 0 ,c,r;
	
	scanf("%d %d", &n,&m); //2 6

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y); // 10 3
		for (j = 1; j <= y; j++) {
			scanf("%d %d", &a, &b);
		
			c = (b * 100) / x;
			if (max < c) {
				max = c;
				r = a;
			}
		
		
		}

	}

	printf("%d", r);
}
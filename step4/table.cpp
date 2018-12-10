#include<stdio.h>
#include<math.h>

typedef long long int lld;

int main() {
	int n,cnt=0;
	int i, j,k;
	lld t,r;

	scanf("%d", &n);
	t = pow(n, 10);

	while (1) {
		if (!t) break;
		t /= 10;
		cnt += 1;
	}

	for (i = 1; i <= n; i++) {
		
		if (i == 1) {
			for (k = 1; k <= cnt + 1; k++) printf(" ");
			for (j = 1; j <= 10; j++) printf("%*d", cnt + 1, j);
			printf("\n");
		}
		else {
			printf("%*d",cnt+1,i);
			for (j = 1; j <= 10; j++) {
				r = pow(i, j);
				printf("%*lld",cnt+1, r);
			}
			printf("\n");
			
		}
		

		

	}

}

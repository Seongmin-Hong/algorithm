#include<stdio.h>

int main() {
	int n,m,i,j,cnt=0;
	int arr[101];
	int k,flag;
	double a;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		arr[i] = m;
	}

	for (i = 1; i <= n-2; i++) {
		flag = 0;
		for (j = i+2; j <= n; j++) {
			a = (arr[i] + arr[j]) / 2.0;
			for (k = i+1; k <= j; k++) {
				if (arr[k] == a) {
					cnt++;
					break;
					
				}
			}

		}
		
		
	}
	printf("%d", cnt);
}

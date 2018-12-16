#include<stdio.h>

int main() {
	int a[100]{0,};
	int n,m,i;
	int cnt=0,sum=0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		a[i] = m;
	}

	for (i = 0; i < n; i++) {
		if (a[i]) cnt++;
		
		else cnt = 0;

		sum += cnt;
	}

	printf("%d", sum);
}
#include<stdio.h>

int main() {
	int n,m, q,i,j,s,r;
	int arr[101]{0,};
	int max = 0;

	scanf("%d %d", &n , &q);
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		for (j = 1; j <= m; j++) {
			scanf("%d", &s);
			arr[s]++;
		}
	}
	for (i = 1; i <= 100; i++) {
		if (max < arr[i]) {
			max = arr[i];
			r = i;
		}
	}
	if(max<q) printf("0");
	else printf("%d", r);

}
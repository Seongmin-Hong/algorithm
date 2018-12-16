#include<stdio.h>

int main() {
	int arr[100001]{0,};
	int n,m,i,j;
	int a, b;
	long long int sum = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		sum += m;
		arr[i] = sum;
	}
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", arr[b] - arr[a-1]);
	}

}
#include<stdio.h>

int main() {
	int arr[42]{0,};
	int i, n ,sum=0;

	for (i = 1; i <= 10; i++) {
		scanf("%d", &n);
		arr[n%42] = 1;
	}
	for (i = 0; i < 42; i++) {
		sum += arr[i];
	}
	printf("%d", sum);
}

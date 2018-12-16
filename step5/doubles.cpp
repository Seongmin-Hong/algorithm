#include<stdio.h>

int main() {
	int arr[16]{ 0, };
	

	int n,i,j;
	int cnt = 0;

	for (i = 1; i <= 15; i++) {
		scanf("%d", &n);
		if (!n) break;
		arr[i] = n;
	}
	
	for (i = 1; i <= 15; i++) {
		for (j = 1; j <= 15; j++) {
			if (!arr[j]) break;

			if (2*arr[i] == arr[j]) {
				cnt += 1;
				break;
			}

		}
	}
	printf("%d", cnt);
}
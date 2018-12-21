#include<stdio.h>

int main() {
	int n,s,i,j,t;
	int arr[1001];

	scanf("%d %d", &n, &s);

	for (i = 0; i < n; i++) 
		scanf("%d", &arr[i]);
	
	for (i = 0; i < s; i++) {
		for (j = 0; j < n-1; j++) {
			if (arr[j] > arr[j + 1]) {
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

	for (i = 0; i < n; i++) printf("%d ", arr[i]);

}

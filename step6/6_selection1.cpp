#include<stdio.h>

int main() {
	int arr[1000];
	int n,s,i,j,r,t;
	int min;

	scanf("%d %d", &n, &s);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < s; i++) {
		min = 1001;
		for (j = i; j < n; j++) {
			if (min > arr[j]) {
				r = j;
				min = arr[j];
			}
		}
		t = arr[r];
		arr[r] = arr[i];
		arr[i] = t;
	}

	for (i = 0; i < n; i++) printf("%d ", arr[i]);

}
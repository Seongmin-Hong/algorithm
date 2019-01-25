#include<stdio.h>
int arr[500000];

int Bsearch(int arr[], int len, int t) {
	int high = len;
	int low = 0;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] > t) high = mid - 1;
		else if (arr[mid] < t) low = mid + 1;

		else return mid;
	}

}

int main() {
	int n,i,x;
	int r;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &x);

	r = Bsearch(arr, n, x);
	if (arr[r] == x) printf("%d", r+1);
	else printf("not found");

}
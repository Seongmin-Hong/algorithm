#include<stdio.h>

int main() {
	int n,i,j,t,flag;
	int arr[1001];
	int cnt = 0;
	int L, H ,left,right;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	L = 0;
	H = n - 1;

	while (L < H) {
		left = L;
		right = H;

		for (i = L; i < H; i++)
			if (arr[i] > arr[i + 1]) {
				t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t;
				left = i + 1;
			}
		
		for(i = H; i> L;i--)
			if (arr[i] < arr[i - 1]) {
				t = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = t;
				right = i - 1;
			}
		cnt++;
		if (L == left && H == right) break;
		L = right;
		H = left;
	
	}

	 printf("%d", cnt);
}